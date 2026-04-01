/*
 * @lc app=leetcode id=290 lang=cpp
 *
 * [290] Word Pattern
 */

// @lc code=start
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        stringstream ss(s);
        string token;
        int countwords = 0;

        while(getline(ss,token,' ')){
            words.push_back(token);
            countwords++;
        }

        int n = pattern.length();
        if(n!=countwords) return false;


        unordered_map <string,char> hmap;
        set <char> used;
        
        for(int i=0;i<n;i++){
            string word = words[i];
            char ch = pattern[i];
            if(hmap.find(word)==hmap.end() && used.find(ch) == used.end()){
                hmap[word] = ch;
                used.insert(ch);
            }
            else if(hmap[word]!=ch) return false;
        }
        return true;
    }
};
// @lc code=end

