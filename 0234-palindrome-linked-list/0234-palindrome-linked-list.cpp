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
    bool isPalindrome(ListNode* head) {
        ListNode* LastNode = NULL;
        for (ListNode* ptr = head; ptr && ptr->next; ptr = ptr->next) {
            LastNode = new ListNode(ptr->val, LastNode);
        }

        for (head && head->next; head = head->next; LastNode = LastNode->next) {
            if (head->val != LastNode->val) return false;
        }
        return true;
    }
};