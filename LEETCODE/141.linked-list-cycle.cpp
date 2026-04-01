/*
 * @lc app=leetcode id=141 lang=cpp
 *
 * [141] Linked List Cycle
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
    bool hasCycle(ListNode *head) {
         ListNode* s = head;
        ListNode* f = head;

        while(f!=NULL && f->next != NULL){
            s = s->next;
            f = f->next->next;
            if(s == f) return true;
        }
    return false;
    }
};
// @lc code=end

