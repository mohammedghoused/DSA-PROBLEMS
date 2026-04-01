/*
 * @lc app=leetcode id=724 lang=cpp
 *
 * [724] Find Pivot Index
 */

// @lc code=start
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftsum = 0, rightsum = 0;
        int totalsum = 0;

        for(int x:nums) totalsum+=x;

        for(int i=0;i<nums.size();i++){
            rightsum = totalsum - leftsum - nums[i];
            if(leftsum == rightsum) return i;
            leftsum+=nums[i];
        }

        return -1;
    }
};
// @lc code=end

