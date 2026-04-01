/*
 * @lc app=leetcode id=1524 lang=cpp
 *
 * [1524] Number of Sub-arrays With Odd Sum
 */

// @lc code=start
class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        
        int n= arr.size();
        int M = 1e9+7;
        int count = 0,oddcount = 0,evencount = 1;
        int sum = 0;
        //WITH PREFIX SUM
        //vector<int> sum(n);
        // sum[0] = arr[0];
        // for(int i = 1; i < n; i++) {
        //     sum[i] = sum[i-1] + arr[i];
        // }
        for(int i=0;i<n;i++){
            //without prefix sum
            sum += arr[i]; //SC = O(1)
            
            if(sum % 2 == 0){
                count = (count + oddcount) % M;
                evencount++;
            }
            else{
                count = (count + evencount) % M;
                oddcount++;
            }
        }
        return count;
    }
};
// @lc code=end

