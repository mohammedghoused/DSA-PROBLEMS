#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    double pow(double x,int n){
    double pw = x;
    for(int i=1;i<n;i++)
    {
        pw *= x;
    }


    return pw;
    }
};

int main() {
    Solution sol;


   double res = sol.pow(2.1,3);

    cout<<"power = "<<res;



    return 0;
}
