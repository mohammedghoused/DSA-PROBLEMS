/*
 * @lc app=leetcode id=128 lang=cpp
 *
 * [128] Longest Consecutive Sequence
 */
#include "leetcode_setup.h"

// @lc code=start
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n =nums.size();
        unordered_set <int> st;
        int longest = 0;

        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }

        for(auto it:st){
            if(st.find(it-1) == st.end()){
                int cnt = 1;
                int x = it;

                while(st.find(x+1) != st.end()){
                    cnt += 1;
                    x = x+1;
                }
                 longest = max(cnt , longest);
            }
        }
        return longest;
    }
};
// @lc code=end


