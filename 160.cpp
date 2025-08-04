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
    ListNode *getInterWithD(ListNode *h1, ListNode *h2, int d) {
        ListNode *curr1 = h1, *curr2 = h2;
        for(int i = 0; i < d; i++)
            curr1 = curr1 -> next;
        while(curr1 != NULL && curr2 != NULL) {
            if(curr1 == curr2)
                return curr1;
            curr1 = curr1 -> next;
            curr2 = curr2 -> next;
        }
        return NULL;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int cnt1 = 0, cnt2 = 0;
        ListNode *curr1 = headA, *curr2 = headB;
        for(;curr1 != NULL; cnt1++)
            curr1 = curr1 -> next;
        for(;curr2 != NULL; cnt2++)
            curr2 = curr2 -> next;
        int diff = abs(cnt1 - cnt2);
        if(cnt1 > cnt2)
            return getInterWithD(headA, headB, diff);
        return getInterWithD(headB, headA, diff);
    }
};
