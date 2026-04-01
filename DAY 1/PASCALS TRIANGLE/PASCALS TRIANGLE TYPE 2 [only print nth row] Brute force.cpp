//to print the nth row of a pascals triangle
#include <bits/stdc++.h>
using namespace std;
int factorial(int n,int r)
{
    int res = 1;
    for(int i=0;i<r;i++){
        res *= (n-i);
        res /= (i+1);
    }
return res;
}
int main() {

    int n=5;

    for(int j=1;j<=n;j++)
    {
        cout<<factorial(n-1,j-1)<<" ";
    }

return 0;
}
