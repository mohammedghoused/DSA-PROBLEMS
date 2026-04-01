//the issue with the Kadane-based approach is that it only finds subarrays that
//the algorithm naturally encounters during its single pass, not all possible subarrays.

#include <bits/stdc++.h>
using namespace std;

void findAllMaxSubarrays(int arr[], int n) {
    long long maxSum = LONG_MIN;
    vector<pair<int, int>> allMaxSubarrays;

    // Find all possible subarrays and their sums
    for (int i = 0; i < n; i++) {
        long long currentSum = 0;
        for (int j = i; j < n; j++) {
            currentSum += arr[j];

            if (currentSum > maxSum) {
                // Found new maximum, clear previous results
                maxSum = currentSum;
                allMaxSubarrays.clear();
                allMaxSubarrays.push_back({i, j});
            } else if (currentSum == maxSum) {
                // Found another subarray with same max sum
                allMaxSubarrays.push_back({i, j});
            }
        }
    }

    cout << "Maximum sum: " << maxSum << endl;
    cout << "All subarrays with maximum sum (" << allMaxSubarrays.size() << " total):" << endl;
// LOOps for printing subarrays
    for (int idx = 0; idx < allMaxSubarrays.size(); idx++) {
        int start = allMaxSubarrays[idx].first;
        int end = allMaxSubarrays[idx].second;

        cout << "Subarray " << (idx + 1) << ": [";
        for (int i = start; i <= end; i++) {
            cout << arr[i];
            if (i < end) cout << ", ";
        }
        cout << "]" << endl;
    }
}

int main() {
    int arr[] = {4, 2, -1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array: [4, 2, -1, 1]" << endl;
    findAllMaxSubarrays(arr, n);

    return 0;
}
