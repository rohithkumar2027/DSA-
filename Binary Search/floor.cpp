#include <bits/stdc++.h>
using namespace std;

int floor(vector<int>nums,int target)
{
  int n=nums.size(),high=n-1,low=0,temp=0;

  while(high>=low)
  {
    int mid =low+(high-low)/2;

    if( nums[mid]<=target)
    {
      temp=mid;
      low=mid+1;
    }
    else high =mid-1;
  }
  return temp;
}
int main()
{
   vector<int>nums={34,55,66,77,89};

   cout<<nums[floor(nums,78)];
    return 0;
}