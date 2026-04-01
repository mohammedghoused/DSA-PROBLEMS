/*
 * @lc app=leetcode id=142 lang=cpp
 *
 * [142] Linked List Cycle II
 */

// @lc code=start
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
    ListNode *detectCycle(ListNode *head) {
         ListNode* s = head;
        ListNode* f = head;
        ListNode* entry = head;

        while(f != NULL && f->next != NULL){
        
            s = s->next;
            f = f->next->next;
            
            if(s == f) {
                while(s !=entry){
                    s = s->next;
                    entry = entry->next;
                }
                 return entry;
            }
        }
        return NULL;
       
    }
};
// @lc code=end

