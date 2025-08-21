#include <bits/stdc++.h>
using namespace std;

int main()
{
      int arr[5]={5,1,6,7,2};
      int n=sizeof(arr)/sizeof(arr[0]);

      for (int i = 0; i < n; i++)
      {
        int j =i;
        while (j>0 && arr[i-1]>arr[i])
        {
            int temp=arr[i-1];
            arr[i-1]=arr[i];
            arr[i]=temp;
        }
        j--;
      }
      

      for (int i = 0; i < n; i++)
      {
        cout << arr[i]<< " ";

      }
      
    return 0;
}