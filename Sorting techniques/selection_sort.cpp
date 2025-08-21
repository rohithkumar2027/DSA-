#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[7] = {1, 5, 6, 7, 4, 3, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    for (int i = 0; i < n; i++)
    {
        int sm=i;
        for (int j = i; j < n; j++)
        {
            if (arr[sm] > arr[j])
                sm = j;
        }
        int temp=arr[i];
        arr[i] =arr[sm];
        arr[sm]=temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}