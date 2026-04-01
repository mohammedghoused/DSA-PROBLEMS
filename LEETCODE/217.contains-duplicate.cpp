/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */
#include "leetcode_setup.h"

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
            int n = nums.size();
            bool ans = false;
            map <int,int> hmap;

    for(int i=0;i<n;i++){
        int curr_ele = nums[i];


        if(hmap.find(curr_ele) != hmap.end())
        {
            ans = true;
            break;
        }
       hmap[curr_ele]++;
    }
return ans;
    }
};
// @lc code=end

