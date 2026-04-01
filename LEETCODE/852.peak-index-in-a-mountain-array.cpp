/*
 * @lc app=leetcode id=852 lang=cpp
 *
 * [852] Peak Index in a Mountain Array
 */

// @lc code=start
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int i = 0;
        int j = n-1;
        
        while(i<j){
            int mid = i + (j-i)/2;
            if(arr[mid]<arr[mid+1]) i = mid + 1;
            else j = mid;
        }
        return i;
    }
};
// @lc code=end

