/*
 * @lc app=leetcode id=2130 lang=cpp
 *
 * [2130] Maximum Twin Sum of a Linked List
 */

// @lc code=start
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
    int pairSum(ListNode* head) {
      
        ListNode* s = head;
        ListNode* f = head;

        // findig middle
        while(f != NULL && f->next != NULL){
            s = s->next;
            f = f->next->next;
        }
        //reverse from middle that is { s }
        ListNode* prev = NULL;
        ListNode* curr = s;
        int max_sum = INT_MIN;
        
        while(curr != NULL){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        // finding max twin sum
        ListNode* slow = head;
        ListNode* fast = prev;
        while(fast != NULL){
             max_sum = max(max_sum, slow->val + fast->val);
            
                slow = slow->next;
                fast = fast->next;
        }
        return max_sum;
    }
};
// @lc code=end

