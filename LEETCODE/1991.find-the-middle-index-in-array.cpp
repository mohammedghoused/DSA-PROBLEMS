/*
 * @lc app=leetcode id=1991 lang=cpp
 *
 * [1991] Find the Middle Index in Array
 */

// @lc code=start
class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
         int leftsum = 0,rightsum = 0,totalsum=0;

        for(int x : nums) totalsum+=x;
 
        for(int i=0;i<nums.size();i++){
            rightsum = totalsum - leftsum - nums[i];
            if(leftsum == rightsum) return i;
            leftsum += nums[i];
        }
        return -1;
    }
};
// @lc code=end

