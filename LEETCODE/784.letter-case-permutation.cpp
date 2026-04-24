/*
 * @lc app=leetcode id=784 lang=cpp
 *
 * [784] Letter Case Permutation
 */

// @lc code=start
class Solution {
public:
    void solve(string ip,string op,vector<string> &f){

        if(ip.length() == 0){
            f.push_back(op);
            return;
        }
        if(isalpha(ip[0])){
            string op1 = op;
            string op2 = op;
            
            op1.push_back(tolower(ip[0]));
            op2.push_back(toupper(ip[0]));

            ip.erase(ip.begin()+0);
            solve(ip,op1,f);
            solve(ip,op2,f);
        }
        else{
            string op1 = op;
            op1.push_back(ip[0]);

            ip.erase(ip.begin()+0);
            solve(ip,op1,f);
        }
    }
    vector<string> letterCasePermutation(string s) {
        vector<string> f;
        string op = "";
        
        solve(s,op,f);
        return f;
    }
};
// @lc code=end

