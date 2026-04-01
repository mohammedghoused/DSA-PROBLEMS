/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hmap;

       for(int i=0;i<nums.size();i++){
        int currele = nums[i];
        int diff = target - currele;
        if(hmap.find(diff) != hmap.end()){
            return {hmap[diff],i};
        }
        hmap[currele] = i;
       }
    return {-1,-1};
    }
};
// @lc code=end

