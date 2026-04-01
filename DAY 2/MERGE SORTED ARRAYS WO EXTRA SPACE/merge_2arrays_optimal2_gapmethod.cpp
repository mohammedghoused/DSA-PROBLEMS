#include <bits/stdc++.h>
using namespace std;

void SwapIfGreater(long long arr1[], long long arr2[], int ind1, int ind2)
{
    if(arr1[ind1] > arr2[ind2])
        swap(arr1[ind1],arr2[ind2]);
}
void merged(long long arr1[], long long arr2[], int n, int m) {

    int gap = n+m / 2 + n+m % 2 ;

    while (gap > 0) {
        int left = 0;
        int right = left + gap;
            while(right < n+m){
                //arr 1 and arr2
                if (left <n && right >=n) {
                    SwapIfGreater(arr1,arr2,left,right-n);
                }
                //arr2 and arr2
                else if(left >=n){
                    SwapIfGreater(arr1,arr2,left-n,right-n);
                }
                //arr1 and arr1
                else{
                    SwapIfGreater(arr1,arr2,left,right);
                }
                left++,right++;
            }
    if(gap == 1) break;
    else gap = gap / 2 + gap % 2;
    }
}

int main()
{
    long long arr1[] = {1, 4, 8, 10};
    long long arr2[] = {2, 3, 9};
    int n = 4, m = 3;
    merged(arr1, arr2, n, m);
    cout << "The merged arrays are: " << "\n";
    cout << "arr1[] = ";
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    cout << "\narr2[] = ";
    for (int i = 0; i < m; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    return 0;
}
