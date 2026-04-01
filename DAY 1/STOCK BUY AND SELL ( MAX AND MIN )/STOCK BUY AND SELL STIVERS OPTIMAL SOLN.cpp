
#include<bits/stdc++.h>
using namespace std;
int markrows(int i)
{
    for(i=0;i<n;i++)
    {
        arr[i][0] == -1;
    }
}
int markcols(int j)
{
    for(j=0;j<n;j++)
    {
        arr[0][j] == -1;
    }
}

int maxProfit(vector<int> &arr) {
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(arr[i][j] == 0)
        {
            markrows();
            markcol();
        }
    }
   }
}

int main() {
    vector<int> arr = {7,1,5,3,6,4};
    int maxPro = maxProfit(arr);
    cout << "Max profit is: " << maxPro << endl;
}

