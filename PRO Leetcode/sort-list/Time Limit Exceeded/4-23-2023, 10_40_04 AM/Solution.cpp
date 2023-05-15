// https://leetcode.com/problems/sort-list

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
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next) return head;

        ListNode *ptr1 = head, *ptr2 = head->next;
        while(ptr1->next && ptr2){
            if(ptr2->val < ptr1->val){
                int data = ptr2->val;
                ptr2->val = ptr1->val;
                ptr1->val = data;
            }
            
            ptr2 = ptr2->next;
            
            if(!ptr2){
                ptr1 = ptr1->next;
                ptr2 = ptr1->next;
            }
        }
        return head;
    }
};