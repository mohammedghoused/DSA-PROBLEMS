/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        unordered_map<char, int> hmap;

         for (char ele: s) {
            hmap[ele]++;
        }
        for (char ele : t) {
            hmap[ele]--;
        }

        for(auto freq:hmap)
            if(freq.second != 0)
                return false;
    
        return true;
    }
};
// @lc code=end

