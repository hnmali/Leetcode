/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head)
            return NULL;

        Node *h2 = head, *curr = head;
        while (curr != NULL) {
            Node* next = curr->next;
            curr->next = new Node(curr->val);
            curr->next->next = next;
            curr = next;
        }
        curr = head;
        while (curr != NULL) {
            curr->next->random =
                (curr->random != NULL) ? curr->random->next : NULL;
            curr = curr->next->next;
        }
        Node* original = head;
        Node* copy = head->next;
        Node* temp = copy;
        while (original && copy) {
            original->next =
                original->next ? original->next->next : original->next;
            copy->next = copy->next ? copy->next->next : copy->next;
            original = original->next;
            copy = copy->next;
        }
        return temp;
    }
};
