/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // Get size of the two linked lists
        int size1 = 0;
        int size2 = 0;
        int rest = 0;
        int SlVal;
        for (ListNode* ptr1 = l1; ptr1; ptr1 = ptr1->next)
            size1++;
        for (ListNode* ptr2 = l2; ptr2; ptr2 = ptr2->next)
            size2++;
        ListNode *bg, *sl;
        (size2 > size1) ? bg = l2 : bg = l1;
        (bg == l2) ? sl = l1 : sl = l2;
        while (bg->next) {
            (sl) ? SlVal = sl->val : SlVal = 0;
            bg->val += SlVal + rest;
            rest = bg->val / 10;
            bg->val = bg->val % 10;
            bg = bg->next;
            if (sl) sl = sl->next;
        }
        (sl) ? SlVal = sl->val : SlVal = 0;
        bg->val += SlVal + rest;
        rest = bg->val / 10;
        bg->val = bg->val % 10;
        if (rest) bg->next = new ListNode(rest);;
        return (size2 > size1) ? l2 : l1;
    }
};