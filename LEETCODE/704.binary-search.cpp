/*
 * @lc app=leetcode id=704 lang=cpp
 *
 * [704] Binary Search
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {   
        int i =0;
        int j = nums.size()-1;
        
       while (i<=j){
            int mid = i + (j - i) / 2;

            if(target == nums[mid]) return mid;
            else if(target > nums[mid]) i = mid+1;
            else j = mid-1;
        }
        return -1;     
    }
};
// @lc code=end

