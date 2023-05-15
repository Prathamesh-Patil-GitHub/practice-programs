// https://leetcode.com/problems/remove-nth-node-from-end-of-list

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *first = head, *second = head;
        if(!head->next) return head->next;
        for(int i=1;i<=n;i++){
            first = first->next;
        }
        while(first->next){
            first = first->next;
            second = second->next;
        }
        second->next = second->next->next;
        return head;
    }
};