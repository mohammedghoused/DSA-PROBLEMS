#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {3,1,3,4,2,4,6,7,2,10};
    int n = 10;
    int ind = 0;
    int duparr[] = {0};
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] == arr[j]){
                duparr[ind] = arr[i];
                    ind++;
            }
        }
    }

    for(int i=0;i<ind;i++)
    {
        cout<<duparr[i]<<" ";
    }

    return 0;
}
