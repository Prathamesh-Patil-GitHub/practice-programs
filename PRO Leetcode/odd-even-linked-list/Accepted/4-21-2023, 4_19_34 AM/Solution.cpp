// https://leetcode.com/problems/odd-even-linked-list

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
        ListNode *oddStart = NULL, *oddEnd = NULL, *evenStart = NULL, *evenEnd = NULL, *curr = head;
        int i=1;
        while(curr){
            if(i%2){
                if(!oddStart){
                    oddStart = curr;
                    oddEnd = oddStart;
                }
                else{
                    oddEnd->next = curr;
                    oddEnd = curr;
                }
                curr = curr->next;
                oddEnd->next = NULL;
            }
            else{
                if(!evenStart){
                    evenStart = curr;
                    evenEnd = evenStart;
                }
                else{
                    evenEnd->next = curr;
                    evenEnd = curr;
                }
                curr = curr->next;
                evenEnd->next = NULL;
            }
            i++;
        }
        if(!evenStart) return oddStart;
        if(!oddStart) return evenStart;
        
        oddEnd->next = evenStart;
        return oddStart;
    }
};