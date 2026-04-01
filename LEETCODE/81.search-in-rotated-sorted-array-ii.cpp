/*
 * @lc app=leetcode id=81 lang=cpp
 *
 * [81] Search in Rotated Sorted Array II
 */

// @lc code=start
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int i = 0;
        int j = n-1;
        int pivotInd = 0;

        //step1: find pivot index
        while(i<j){
            while(i<j && nums[i] == nums[i+1]) i++;
            while(i<j && nums[j] == nums[j-1]) j--;
            
            int mid = i + (j - i) / 2;
            if(nums[mid] == nums[j]) continue;
            if(nums[mid] > nums[j]) i = mid+1;
            else j = mid;
        }
        pivotInd = i;

        //step 2: definig boundaries
        i = 0;
        j = n-1;

        if(target >= nums[pivotInd] && target <= nums[n-1]) i = pivotInd;
        else j = pivotInd - 1;

        // Step 3: Standard binary search
        while (i <= j) {
            int mid = i + (j - i) / 2;
            if (nums[mid] == target) return true;
            else if (nums[mid] < target) i = mid + 1;
            else j = mid - 1;
        }
        return false; // target not found
    }
};
// @lc code=end

