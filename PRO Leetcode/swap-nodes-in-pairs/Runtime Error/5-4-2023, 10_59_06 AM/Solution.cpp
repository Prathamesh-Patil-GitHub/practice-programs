// https://leetcode.com/problems/swap-nodes-in-pairs

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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode *dummy = new ListNode(0);
        ListNode *prev = dummy;
        ListNode *ptr = head;
        while(ptr){
            ListNode *next = ptr->next;
            ptr->next = next->next;
            next->next = ptr;
            prev->next = next;
            prev = ptr;
            ptr = ptr->next;
        }
        return dummy->next;
    }
};