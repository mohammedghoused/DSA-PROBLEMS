#include<bits/stdc++.h>
int main()
{
    int arr [] = {3,1,3,4,2};
    int freq[] = {0};
    int n=5;

    for(int i=0;i<n;i++)
    {
        if(freq[arr[i]] == 0)
        {
            freq[arr[i]]++;
        }
        else {
            std::cout<<"duplicate ele = "<<arr[i];
            break;
    }
    }

    return 0;
}
