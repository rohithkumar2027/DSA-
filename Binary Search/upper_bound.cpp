#include<bits/stdc++.h>
using namespace std;

int upper(int n,int arr[],int target)
{
    int high=n-1 ,low=0,temp=n-1;
    while(high>low)
    {
        
        int mid=(low+high)/2;
        if(arr[mid]>target)
        {
            temp=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return temp;
}

int main()
{
    int arr[6]={3,4,42,67,89,96};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"upper_bound index:"<<upper(n,arr,7);

    return 0;
}
