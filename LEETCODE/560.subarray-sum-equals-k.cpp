/*
 * @lc app=leetcode id=560 lang=cpp
 *
 * [560] Subarray Sum Equals K
 */
#include "leetcode_setup.h"

// @lc code=start
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int cumsum = 0;
        int result = 0;
        unordered_map <int,int> hmap;
        hmap[0] = 1;

        for(int i=0;i<nums.size();i++){
            cumsum+=nums[i];

            if(hmap.find(cumsum - k) != hmap.end())
                result += hmap[cumsum - k];

             hmap[cumsum]++;
        }
    return result;
    }
};
// @lc code=end

