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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL)
            return NULL;
        ListNode *es, *ee, *os, *oe, *curr = head;
        es = ee = os = oe = NULL;
        for(int i = 1; curr != NULL; i++) {
            if(i&1) {
                if(os == NULL)
                    os = oe = curr;
                else {
                    oe->next = curr;
                    oe = oe -> next;
                }
            }
            else {
                if(es == NULL)
                    es = ee = curr;
                else {
                    ee->next = curr;
                    ee = ee -> next;
                }
            }
            curr = curr -> next;
        }
        if(os == NULL || es == NULL)
            return head;
        oe -> next = es;
        ee -> next = NULL;
        return os;
    }
};
