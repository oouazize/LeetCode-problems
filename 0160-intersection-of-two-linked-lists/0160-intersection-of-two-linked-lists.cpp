/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *ptr1 = headA;
        ListNode *ptr2 = headB;
        int SizeA = 0;
        int SizeB = 0;
        while (ptr1) {
            SizeA++;
            ptr1 = ptr1->next;
        }
        while (ptr2) {
            SizeB++;
            ptr2 = ptr2->next;
        }
        ptr1 = headA;
        ptr2 = headB;
        while (SizeA > SizeB) {
            ptr1 = ptr1->next;
            SizeA--;
        }
        while (SizeA < SizeB)
        {
            ptr2 = ptr2->next;
            SizeB--;
        }
        while (ptr2 != ptr1) {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        return (ptr1 != NULL) ? ptr1 : NULL;
    }
};