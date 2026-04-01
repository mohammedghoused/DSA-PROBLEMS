#include <bits/stdc++.h>
using namespace std;

vector<int> findMissingRepeatingNumbers(vector<int> arr) {
    int n =arr.size();
    int missing = -1;
    int repeating  = -1;
    int hasharr[n+1] = {0};
    for(int i=0;i<=n;i++)
    {
        hasharr[arr[i]]++;
    }

    for(int i=0;i<=n;i++)
    {
        if(hasharr[i] == 0) missing = i;
        else if (hasharr[i]==2) repeating = i;

        if(missing != -1 && repeating != -1)
            break;
    }
    return {repeating , missing};


}

int main()
{
    vector<int> a = {3, 1, 2, 5, 4, 6, 7, 5};
    vector<int> ans = findMissingRepeatingNumbers(a);
    cout << "The repeating and missing numbers are: {"
         << ans[0] << ", " << ans[1] << "}\n";

    return 0;
}

