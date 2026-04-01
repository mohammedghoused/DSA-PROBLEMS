#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

      int majorityElement(vector<int>& arr) {
        int count = 0;
        int candidate = 0;

        for (int num : arr) {
            if (count == 0) {
                candidate = num;
                count = 1;
            } else if (num == candidate) {
                count++;
            } else {
                count--;
            }
        }
        return candidate;
    }
};

int main() {
    Solution sol;

    vector<int> arr = {2,2,2,1,1,2,2};

   int res = sol.majorityElement(arr);

    cout<<"ele = "<<res;



    return 0;
}
