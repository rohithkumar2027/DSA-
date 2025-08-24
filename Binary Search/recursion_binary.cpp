#include <bits/stdc++.h>
using namespace std;

int binary(int arr[],int target,int low , int high)
{
    int mid =(high+low)/2;
    if(low>high) return -1;
    if(arr[mid]==target) return mid;
    else if(arr[mid]<target) return binary(arr, target,mid+1,high);
    else  return binary(arr, target,low,mid-1);

}
int main()
{
    int arr[5] = {1, 3, 23, 45, 65}, target = 3;
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "index:" << binary(arr, target,0,n-1);

    return 0;
}