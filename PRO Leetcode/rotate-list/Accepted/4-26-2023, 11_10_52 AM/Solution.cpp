// https://leetcode.com/problems/rotate-list

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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next) return head;

        ListNode *second = head;
        int size = 1;
        while(second->next){
            size++;
            second = second->next;
        }
        k = k%size;
        ListNode *first = head;
        for(int i=1;i<(size-k);i++){
            first = first->next;
        }
        second->next = head;
        head = first->next;
        first->next = NULL;
        return head;
    }
};