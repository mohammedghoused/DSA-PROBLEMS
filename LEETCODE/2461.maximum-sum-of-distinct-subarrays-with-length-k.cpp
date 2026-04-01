/*
 * @lc app=leetcode id=2461 lang=cpp
 *
 * [2461] Maximum Sum of Distinct Subarrays With Length K
 */

// @lc code=start
class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int i = 0;
        long long sum = 0;  
        long long maxsum = 0;
        unordered_set <int> st;
        
        for(int j=0;j<nums.size();j++){
            while (st.count(nums[j]))
            {
                sum -= nums[i];
                st.erase(nums[i]);
                i++;

                /* code */
            }
           
            
            
            st.insert(nums[j]);

            sum += nums[j];

            
            if(j-i+1 == k){

                maxsum = max(maxsum, sum);
                st.erase(nums[i]);
                sum -= nums[i];
                i++;
            }

    
        }
        return maxsum;
    }
};
// @lc code=end

