/*
 * @lc app=leetcode id=643 lang=cpp
 *
 * [643] Maximum Average Subarray I
 */

// @lc code=start
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
         int i = 0;
        int j = 0;
        double sum = 0;
        double avg = 0;
        double maxavg = INT_MIN;
        
        for(j=0;j<nums.size();j++){
            sum += nums[j];
            if(j-i+1 == k){
                avg = sum/k;
                maxavg = max(maxavg,avg);
                sum -= nums[i];
                i++;
            } 
    }
    return maxavg;
}
};
// @lc code=end

