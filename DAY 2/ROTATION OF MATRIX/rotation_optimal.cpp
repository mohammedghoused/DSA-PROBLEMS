#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector < vector < int >> arr = {{1,2,3},{4,5,6},{7,8,9}};
    int n = arr.size();

    //transpose:
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(i!=j)
                swap(arr[i][j],arr[j][i]);
            else
                arr[i][j] = arr[i][j];
        }
    }

    //reversing each row and directly printing . By this real matrix does not change
    //it remains same to have reverse effect on the real matrix:
    //--
    //use TWO POINTERS TECHNIQUE
    //OR
    //for (int i = 0; i < n; i++) {
//        reverse(arr[i].begin(), arr[i].end());
//        }


    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>=0;j--)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<std::endl;
    }
    return 0;
}

