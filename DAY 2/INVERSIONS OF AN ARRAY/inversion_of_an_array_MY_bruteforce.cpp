#include <bits/stdc++.h>
using namespace std;

void findPairs(vector<int> arr) {

    int n =arr.size();
    int pairs = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(i<j)
            {
                if(arr[j] < arr[i])
                {
                    cout<<arr[i]<<" "<<arr[j]<<std::endl;
                    pairs++;
                }
            }
        }
    }

    cout<<"Pairs = "<<pairs;





}

int main()
{
    vector<int> a = {5,3,2,1,4};
    findPairs(a);

    return 0;
}


