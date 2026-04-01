#include <bits/stdc++.h>
using namespace std;
//here we are accesing and manipulation same array not like other using ans array.
int main()
{
    vector<vector<int>> arr = {{1,3},{2,6},{8,10},{15,18}};
    int n = arr.size();

    sort(arr.begin(), arr.end());

    int index = 0; // Points to index where the next merged interval will go

    for (int i = 1; i < n; i++)
    {
        // If overlapping
        if (arr[index][1] >= arr[i][0])
        {
            arr[index][1] = max(arr[index][1], arr[i][1]);
        }
        else
        {
            index++;
            arr[index] = arr[i]; // Move interval forward
        }
    }

    // Print only merged intervals
    for (int i = 0; i <= index; i++)
    {
        cout << arr[i][0] << " " << arr[i][1] << endl;
    }

    return 0;
}
