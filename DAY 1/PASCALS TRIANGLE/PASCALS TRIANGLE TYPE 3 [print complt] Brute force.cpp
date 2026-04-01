//to print the entire pascals triangle
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

    int n=6;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<factorial(i-1,j-1)<<" ";
    }
    cout<<"\n";
}

return 0;
}
