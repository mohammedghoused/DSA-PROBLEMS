#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector < int > arr;
    arr = {1,3,4,2,2};
    int n = arr.size();

    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++)
        {
        if(arr[i] == arr[i+1])
            {
            cout<<"duplicate ele "<<arr[i];
            break;
        }
    }




return 0;
}
