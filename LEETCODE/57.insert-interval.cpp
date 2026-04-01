/*
 * @lc app=leetcode id=57 lang=cpp
 *
 * [57] Insert Interval
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, 
        vector<int>& newInterval) {
        int s2 = newInterval[0];
        int e2 = newInterval[1];

        vector<vector<int>> res;
        for(int i=0;i<intervals.size();i++){
            int s1 = intervals[i][0];
            int e1 = intervals[i][1];

            if(e1 < s2){
                res.push_back({s1,e1});
            }
            else if(s1 > e2){
                res.push_back({s2,e2});
                s2 = s1;
                e2 = e1;
            }
            else{
                e2 = max(e1,e2);
                s2 = min(s1,s2);
            }
        }
         res.push_back({s2, e2});
        return res;
    }
};
// @lc code=end

