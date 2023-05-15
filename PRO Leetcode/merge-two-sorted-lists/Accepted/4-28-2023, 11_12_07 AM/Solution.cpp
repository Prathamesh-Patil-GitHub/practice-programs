// https://leetcode.com/problems/merge-two-sorted-lists

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *dummy = new ListNode(0);
        ListNode *copy = dummy;
        ListNode *first = list1;
        ListNode *second = list2;
        while(first && second){
            if(first->val <= second->val){
                copy->next = first;
                first = first->next;
            }
            else{
                copy->next = second;
                second = second->next;
            }
            copy = copy->next;
        }

        if(first) copy->next = first;
        else copy->next = second;

        return dummy->next;
    }
};