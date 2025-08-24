#include <bits/stdc++.h>
using namespace std;

int binary(int arr[],int target,int n)
{
    
    int low=0,high=n-1;

    while (low<=high)
    {
        int mid=(low+high)/2;

        if(arr[mid]==target) return mid;

        else if (arr[mid]>target)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }

    return -1;
    
}

int main()
{
    int arr[5]={1,3,23,45,65} ,target=3;
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"index:"<<binary(arr,target,n);
    return 0;
}