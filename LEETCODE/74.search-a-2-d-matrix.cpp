/*
 * @lc app=leetcode id=74 lang=cpp
 *
 * [74] Search a 2D Matrix
 */

// @lc code=start
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, 
        int target) {
        int n = matrix.size();        // rows
        int m = matrix[0].size();     // columns
        int i = 0;
        int j = n * m - 1;

        while (i <= j){
            int mid = i+(j-i)/2;
            int row = mid/m;
            int col = mid%m;

            if(target == matrix[row][col])return true;
            else if (target>matrix[row][col]) i = mid + 1;
            else j = mid - 1;
        }
        return false; 
    } 
};
// @lc code=end

