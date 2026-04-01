/*
 * @lc app=leetcode id=739 lang=cpp
 *
 * [739] Daily Temperatures
 */

// @lc code=start
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        int n = temperatures.size();
        stack <int> st;
        vector<int> ans(n,0);

        for(int i=0;i<n;i++){
            while(!st.empty() && temperatures[i] > temperatures[st.top()]){
                int top = st.top();
                st.pop();
                ans[top] = i-top;
            }
            st.push(i);
        }
        return ans;
    }
};
// @lc code=end

