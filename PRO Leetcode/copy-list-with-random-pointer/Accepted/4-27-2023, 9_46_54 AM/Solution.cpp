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
        unordered_map<Node* , Node*> um;
        
        Node* curr = head;
        while(curr){
            Node *temp = new Node(curr->val);
            um[curr] = temp;
            curr = curr->next;
        }
        curr = head;
        while(curr){
            if(curr->next)  um[curr]->next = um[curr->next];
            else um[curr]->next = NULL;
            if(curr->random)    um[curr]->random = um[curr->random];
            else um[curr]->random = NULL;
            
            curr = curr->next;
        }
        return um[head];
    }
};