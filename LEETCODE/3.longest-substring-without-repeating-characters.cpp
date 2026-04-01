/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0;
        unordered_set<char> st;
        int maxcount = 0;
        int count = 0;
        
        while(j < s.length()){
            //handling duplicates
            while(st.count(s[j])){
                st.erase(s[i]);
                count--;
                i++;
            }
            st.insert(s[j]);
            count++;
            j++;
            maxcount = max(maxcount,count);
        }
         return maxcount;
    }
};
// @lc code=end

