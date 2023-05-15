// https://leetcode.com/problems/copy-list-with-random-pointer

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
        if(!head) return head;

        Node *curr = head;
        while(curr){
            Node *temp = new Node(curr->val);
            temp->next = curr->next;
            curr->next = temp;
            curr = curr->next->next;
        }

        curr = head;
        while(curr){
            if(curr->random) curr->next->random = curr->random->next;
            curr = curr->next->next;
        }

        curr = head;
        Node *dummy = new Node(0);
        Node *copy = dummy;
        while(curr){
            Node *next = curr->next->next;
            copy->next = curr->next;
            curr->next = next;
            copy = copy->next;
            curr = curr->next;
        }
        return dummy->next;
    }
};