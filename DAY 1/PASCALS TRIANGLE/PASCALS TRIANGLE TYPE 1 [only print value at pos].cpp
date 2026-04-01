//to print a pascals triangle numbber when n,r is given
//when passing the arguments to the fxn pass n-1, r-1 to get the req result
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

    int n=5,m=3;
    cout << "pascal triangle position vlaue of @ "<<n<<" "<<m<<" is "<<factorial(n-1,m-1);

return 0;
}
