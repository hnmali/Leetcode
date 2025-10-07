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
    ListNode* findMid(ListNode* head) {
        ListNode *fast = head->next, *slow = head;
        while(fast != NULL && fast->next != NULL) {
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        return slow;
    }
    ListNode* merge(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(-1);
        ListNode *temp = dummy;
        while(l1 != NULL && l2 != NULL) {
            if(l1 -> val <= l2 -> val) {
                temp -> next = l1;
                l1 = l1 -> next;
            }
            else {
                temp -> next = l2;
                l2 = l2 -> next;
            }
            temp = temp -> next;
        }
        if(l1 != NULL)
            temp -> next = l1;
        else
            temp -> next = l2;
        return dummy -> next;
    }
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        ListNode* middle = findMid(head);
        ListNode* right = middle -> next, *left = head;
        middle -> next = NULL;
        left = sortList(left);
        right = sortList(right);
        return merge(left, right);
    }
};
