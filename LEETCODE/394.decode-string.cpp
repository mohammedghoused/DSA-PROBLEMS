/*
 * @lc app=leetcode id=394 lang=cpp
 *
 * [394] Decode String
 */

// @lc code=start
class Solution {
public:
    string decodeString(string s) {
        string ds = "";
        stack<int> numst;
        stack<string> strst;
        string curr = "";
        int num = 0;

        for(char ch : s){
            if(isdigit(ch)) num = num*10+ch-'0';
            
            else if(ch == '['){
                numst.push(num);
                strst.push(curr);
                num = 0;
                curr = "";
            }

            else if(ch == ']'){
                int k = numst.top();numst.pop();
                string prev = strst.top();strst.pop();
                string temp = "";
                while(k--) temp+=curr;
                curr = prev + temp;
            }
            
            else curr += ch;
        }
        return curr;
    }
};
// @lc code=end

