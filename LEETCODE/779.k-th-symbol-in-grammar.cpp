/*
 * @lc app=leetcode id=779 lang=cpp
 *
 * [779] K-th Symbol in Grammar
 */

// @lc code=start
class Solution {
public:
    int kthGrammar(int n, int k) {
        
        //base condition
        if(n==1 && k ==1){
            return 0;
        }
        int mid = 1 << (n - 2);//-->pow(2,n-1)/2

        //induction step
        //hypothesis
        if(k<=mid) return kthGrammar(n-1,k);
        else return !kthGrammar(n-1,k-mid);
    }
};
// @lc code=end

