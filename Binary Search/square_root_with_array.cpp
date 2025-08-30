#include <bits/stdc++.h>
using namespace std;

int sqrt_binary(vector<int>nums,int n,int target)
{
    int high=n-1,low=0,temp=-1;

    while(high>=low)
    {
        int mid=low+(high-low)/2;

        if((nums[mid]*nums[mid])<=target)
        {
            temp=nums[mid];
            low=mid+1;
        }
        else high=mid-1;

    }
    return temp;
}

int main()
{
    vector<int>nums={1,2,3,4,5,6,7,8,9};
    int n=nums.size();

    cout<<sqrt_binary(nums,n,72);
    return 0;
}