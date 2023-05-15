// https://leetcode.com/problems/intersection-of-two-linked-lists

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *first = headA, *second = headB;
        int count1 = 0, count2 = 0;
        while(count1 != 2 && count2 != 2){
            if(first == second) return first;
            
            first = first->next;
            second = second->next;

            if(!first) first = headB, count1++;
            if(!second) second = headA, count2++;
        }
        return NULL;
    }
};