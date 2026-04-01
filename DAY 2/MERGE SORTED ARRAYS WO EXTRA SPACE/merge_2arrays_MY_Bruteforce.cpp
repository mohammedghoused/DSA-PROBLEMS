#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=4;
    int m=3;
    int arr1[n] = {1,4,8,10};
    int arr2[m] = {2,3,9};

 vector<int> merged(n + m);  // Output container

    // std::merge requires sorted inputs

    merge(arr1, arr1 + n, arr2, arr2 + m, merged.begin());

    for(int i = 0;i<n+m;i++)
    {
        if(i<n)
            arr1[i] = merged[i];
        else
            arr2[i-n] = merged[i];
    }



        for (int x : arr1)
    {
        cout << x << " ";
    }
cout<<"\n";
    for (int x : arr2)
    {
        cout << x << " ";
    }
    return 0;
}
