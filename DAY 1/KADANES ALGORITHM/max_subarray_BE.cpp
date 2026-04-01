#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(int arr[], int n) {
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            cout<<arr[j]<<"\t";
            sum += arr[j];
            cout<<" = "<<sum<<std::endl;
            cout<<std::endl;

            maxi = max(maxi, sum);

        }cout<<std::endl;
    }
    return maxi;
}

int main()
{
    int arr[] = { -2, -1,4, 2, 3, -5, -1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxSum = maxSubarraySum(arr, n);
    cout << "The maximum subarray sum is: " << maxSum << endl;
    return 0;
}

