#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5];
    int i;
    for(i=0;i<5;i++)
        cin>>arr[i];
         int j=0;
        for(i=0;i<5;i++)
        {
            if(arr[i]>arr[i+1])
            arr[j]=arr[i+1];
            arr[i+1]=arr[j];
            j++;
        }

        cout<<arr[j]<<' ';
}
