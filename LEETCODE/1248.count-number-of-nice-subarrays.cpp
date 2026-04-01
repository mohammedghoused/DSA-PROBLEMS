/*
 * @lc app=leetcode id=1248 lang=cpp
 *
 * [1248] Count Number of Nice Subarrays
 */

// @lc code=start
class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int i = 0,j = 0;
        int oddcount = 0;
        int prvcount = 0;
        int nicearrs = 0;
        

        for(j = 0;j<nums.size();j++){
            if(nums[j]%2 != 0) {
                oddcount++;
                prvcount = 0;
            }
            while(oddcount == k) {
                prvcount++;
                if(nums[i]%2 != 0){
                    oddcount--;
                }
                i++;    
            }

            nicearrs += prvcount;
        }
        return nicearrs;
    }
};
// @lc code=end

