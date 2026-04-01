/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int s=0;
        int n=nums.size();

        for(int f=0;f<n;f++){
            if(nums[f] != 0){
               
                int temp = nums[s];
                nums[s] = nums[f];
                nums[f] = temp;
                s++;
                
            }
        }
    }
};
// @lc code=end

