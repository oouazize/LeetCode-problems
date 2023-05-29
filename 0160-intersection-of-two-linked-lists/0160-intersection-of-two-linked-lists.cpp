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
        while (ptr1 != ptr2) {
            ptr1 = ptr1 ? ptr1=ptr1->next : ptr1=headB;
            ptr2 = ptr2 ? ptr2=ptr2->next : ptr2=headA;
        }
        return ptr1;
    }
};