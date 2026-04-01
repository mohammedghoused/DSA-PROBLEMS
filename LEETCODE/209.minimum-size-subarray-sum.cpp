/*
 * @lc app=leetcode id=209 lang=cpp
 *
 * [209] Minimum Size Subarray Sum
 */

// @lc code=start
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
         int i = 0;
        int sum = 0;
        int mincount = INT_MAX;

        for (int j = 0; j < nums.size(); j++) {
            sum += nums[j];

            while (sum >= target) {
                mincount = min(mincount, j - i + 1);
                sum -= nums[i];
                i++;
            }
        }

        return (mincount == INT_MAX) ? 0 : mincount;
    }
};
// @lc code=end

