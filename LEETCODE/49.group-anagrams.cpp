/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string,vector<string>> hmap;
        
        vector<vector<string>> res;

        for(auto c :strs){
            string sortedchar = c;
            sort(sortedchar.begin(),sortedchar.end());
            hmap[sortedchar].push_back(c);
        }
        for(auto x: hmap){
            res.push_back(x.second);
        }
        return res;
    }
};
// @lc code=end

