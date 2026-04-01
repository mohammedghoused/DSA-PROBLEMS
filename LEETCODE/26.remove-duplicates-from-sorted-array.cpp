/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int s = 0;
      int n = nums.size();

      for(int f=1;f<n;f++){
        if(nums[s] != nums[f]){
          s++;
          nums[s] = nums[f];
        }
      }
      return s+1;
    }
};
// @lc code=end

