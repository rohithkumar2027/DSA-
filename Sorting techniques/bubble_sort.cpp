#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5]={6,8,10,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);

      for (int i=n-1; i>=0;i--)
      {
        int swa=0;
        for (int j = 0; j < i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swa=1;
            }   
        }
        if(swa==0) break;
      }


      for (int i = 0; i < n; i++)
      {
        cout<<arr[i]<<" ";
      }
      
    return 0;
}