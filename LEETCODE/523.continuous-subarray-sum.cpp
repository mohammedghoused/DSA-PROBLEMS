/*
 * @lc app=leetcode id=523 lang=cpp
 *
 * [523] Continuous Subarray Sum
 */

// @lc code=start
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        int sum = 0;
        unordered_map <int,int> hmap;

        hmap.insert({0,-1});

        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int rem = (k == 0)? sum: sum%k;

            if(hmap.find(rem) != hmap.end()){
                if(i - hmap[rem] >= 2){
                    return true;
                }
            }
            else hmap.insert({rem, i});
        }
        return false;
    }
};
// @lc code=end

