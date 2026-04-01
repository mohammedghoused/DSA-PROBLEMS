//to print the nth row of a pascals triangle
#include <bits/stdc++.h>
using namespace std;
int main() {

    cout<<"nth row :\n";
    int ans = 1;
    int n = 6;
    cout<<ans<<" ";
    for(int j=1;j<=n;j++)
    {
        ans *= (n-j);
        ans /= j;
        cout<<ans<<" ";
    }

return 0;
}
