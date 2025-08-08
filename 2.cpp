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
        ListNode *head = NULL, *curr, *curr1 = l1, *curr2 = l2;
        int c = 0;
        while (curr1 != NULL && curr2 != NULL) {
            int sum = c + (curr1->val) + (curr2->val);
            c = sum/10;
            if (head == NULL) {
                head = new ListNode(sum % 10);
                curr = head;
            } else {
                ListNode* temp = new ListNode(sum % 10);
                curr->next = temp;
                curr = curr->next;
            }
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
        while (curr1 != NULL) {
            int sum = c + (curr1->val);
            c = sum/10;
            ListNode* temp = new ListNode(sum % 10);
            curr->next = temp;
            curr = curr->next;
            curr1 = curr1->next;
        }
        while (curr2 != NULL) {
            int sum = c + (curr2->val);
            c = sum/10;
            ListNode* temp = new ListNode(sum % 10);
            curr->next = temp;
            curr = curr->next;
            curr2 = curr2->next;
        }
        if(c) {
            ListNode *temp = new ListNode(1);
            curr -> next = temp;
        }
        return head;
    }
};
