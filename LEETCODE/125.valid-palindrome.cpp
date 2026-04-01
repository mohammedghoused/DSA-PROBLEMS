/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {
       string clean = "";
       // converting uppercase to lowercase 
       //adding only alphanumeric chars
       for(char ch : s){
            if(isalnum(ch))
                clean+=tolower(ch);
       }

       //two pointers logic 
       int l = 0;
       int r = clean.length() - 1;

       while(l<r){
        if(clean[l] != clean[r]) return false;
        l++;
        r--;
       }

       return true;

    }
};
// @lc code=end

