
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int binsearch(vector<int> &mat,int target)
    {
        int n = mat.size();
        int low = 0;
        int high = n-1;
        while(low<=high){
            int mid = (low+high)/2;


            if(mat[mid] == target) return mid;
            else if(target > mat[mid]) low = mid+1;
            else high = mid-1;
        }
        return -1;
    }
    pair<int,int> search2d(vector<vector<int>> &mat,int target){

    int n = mat.size();
    int ind = -1;
    for(int i=0;i<n;i++)
    {
        ind = binsearch(mat[i],target);
        if(ind != -1)
            return {i,ind};
    }
    return {-1,-1};
    }
};

int main() {
    Solution sol;

   vector<vector<int>> matrix = {{1, 4, 7, 11, 15},
                                 {2, 5, 8, 12, 19},
                                 {3, 6, 9, 16, 22},
                                 {10, 13, 14, 17, 24},
                                 {18, 21, 23, 26, 30}
    };
    pair<int,int> res = sol.search2d(matrix,8);
if(res.first != -1 && res.second != -1)
    cout<<" search true"<<res.first<<" "<<res.second;
else
    cout<<" search false";


    return 0;
}
