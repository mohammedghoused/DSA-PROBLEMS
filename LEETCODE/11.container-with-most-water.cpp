/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution {
public:
   int maxArea(vector<int>& height) {
     int l = 0;
     int r = height.size() - 1;
     int maxArea = INT_MIN;

     while(l<r){
        int area = (r-l) * min(height[l],height[r]);
        maxArea= max(maxArea,area);

        //two pointers logic
        if(height[l] < height[r]) l++;
        else r--;
     }
     return maxArea;
    }
};

// @lc code=end

