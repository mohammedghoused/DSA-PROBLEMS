/*
 * @lc app=leetcode id=33 lang=cpp
 *
 * [33] Search in Rotated Sorted Array
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int i = 0;
        int j = n-1;
        int pivotInd = 0;

        //step1: find pivot index
        while(i<j){
            int mid = i + (j - i) / 2;
            if(nums[mid] > nums[j]) i = mid + 1;
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
            if (nums[mid] == target) return mid;
            else if (nums[mid] < target) i = mid + 1;
            else j = mid - 1;
        }
        return -1; // target not found
    }
};
// @lc code=end

