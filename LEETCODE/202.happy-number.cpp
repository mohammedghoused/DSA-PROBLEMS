/*
 * @lc app=leetcode id=202 lang=cpp
 *
 * [202] Happy Number
 */

// @lc code=start
class Solution {
public:
    bool isHappy(int n) {
         int slow = square(n);
          int fast = square(square(n));
        
          if (slow == 1 || fast == 1) return true;
         
          while(fast != slow){
            slow = square(slow);
            fast = square(square(fast));

            if(slow == 1 || fast == 1){
                return true;
            }
          }    
    return false;      
    }
public:
     int square(int n){
        int ans = 0;
        while(n>0){
            int n1 = n%10;
            ans += n1*n1;
            n = n/10;
        }
        return ans;
     }
};
// @lc code=end

