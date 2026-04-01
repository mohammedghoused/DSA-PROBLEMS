#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(int arr[], int n) {
    int maxi = INT_MIN;
    //USE K VARIABLE TO PRINT THE EVERY POSSIBLE SUB ARRAY.
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int sum = 0;
            cout<<"[ ";
                for (int k = i; k <= j; k++) {
                    sum += arr[k];
                    cout<< arr[k]<<" , ";
                }
            cout<<" ]";
        cout<<" = "<<sum<<std::endl;
        maxi = max(maxi, sum);
        }

        cout<<std::endl;
    }
    return maxi;
}

int main()
{
    //int arr[] = { -2, -3,-4, -1, -2, 1, 5, 3};
    int arr[] = { -2, -1,4, 2, 3, -5, -1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxSum = maxSubarraySum(arr, n);
    cout << "The maximum subarray sum is: " << maxSum << endl;
    return 0;
}

