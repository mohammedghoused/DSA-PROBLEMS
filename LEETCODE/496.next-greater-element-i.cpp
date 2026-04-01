/*
 * @lc app=leetcode id=496 lang=cpp
 *
 * [496] Next Greater Element I
 */

// @lc code=start
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        unordered_map <int,int> hmap_nge;
        vector<int> ans;

        for(int i=nums2.size()-1;i>=0;i--){
            while(!st.empty() && st.top() <= nums2[i])
                st.pop();
            
        hmap_nge[nums2[i]] = st.empty()?-1:st.top();
        st.push(nums2[i]);
        }

        for(int num:nums1)
            ans.push_back(hmap_nge[num]);

        return ans;
    }
};
// @lc code=end

