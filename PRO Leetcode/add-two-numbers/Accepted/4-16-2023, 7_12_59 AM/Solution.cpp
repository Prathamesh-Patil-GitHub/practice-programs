// https://leetcode.com/problems/add-two-numbers

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* first = l1;
        ListNode* second = l2;
        ListNode* res = NULL;
        ListNode* temp = NULL;
        int carry = 0;
        while(first && second){
            int num = first->val + second->val;

            if(!res){
                res = new ListNode((num+carry)%10);
                carry = (num+carry)/10;
                temp = res;
            }
            else{
                temp->next = new ListNode((num+carry)%10);
                carry = (num+carry)/10;
                temp = temp->next;
            }
            first = first->next;
            second = second->next;
        }

        while(first){
            int num = first->val+carry;
            temp->next = new ListNode(num%10);
            carry = num/10;
            temp = temp->next;
            first = first->next;
        }

        while(second){
            int num = second->val+carry;
            temp->next = new ListNode(num%10);
            carry = num/10;
            temp = temp->next;
            second = second->next;
        }

        if(carry){
            temp->next = new ListNode(1);
        }

        return res;
    }

};