#include <bits/stdc++.h>
using namespace std;
int  findAllMaxSubarrays(int arr[], int n) {

  int profit = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] < arr[j])
            {
                profit = max(profit,arr[j] - arr[i]);
            }
        }
    }
    return profit;



}

int main() {
    int arr[] = {7,1,5,6,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int p=findAllMaxSubarrays(arr, n);
    cout<<" max profit = "<<p;

    return 0;
}
