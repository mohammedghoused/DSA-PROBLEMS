/*
 * @lc app=leetcode id=1094 lang=cpp
 *
 * [1094] Car Pooling
 */

// @lc code=start
class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
         vector<int> res(1001, 0);

        for(auto &t : trips){
            int no_of_p = t[0];
            int from = t[1];
            int to = t[2];

            res[from] += no_of_p; //pick up
            res[to] -= no_of_p;   //drop
        }
        int cur = 0;
        for(int i=0;i<1001;i++){
            cur += res[i];
            if(cur > capacity) return false;
            
        }
        return true;
    }
};
// @lc code=end

