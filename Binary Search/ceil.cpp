#include <bits/stdc++.h>
using namespace std;

int ceil(vector<int> nums, int target)
{
    int n=nums.size(),temp=n,low=0,high=n-1;
     
    while (high>=low)
    {
        int mid=low+(high-low)/2;
        if(nums[mid]>=target)
        {
            temp=mid;
            high =mid-1;
        }
        else low =mid+1;
    }
    return temp;
}
int main()
{
      vector<int> nums={1,23,46,67,88};

      cout<<nums[ceil(nums,77)];
    return 0;
}