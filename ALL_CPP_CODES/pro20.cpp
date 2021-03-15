#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,i,arr[10];
    cin>>T;
    for(i=1;i<=T;i++)
    {
           for(int j=0;j<3;j++)
           cin>>arr[j];

           for(int k=0;k<3;k++){
           if(arr[0]>arr[1] && arr[0]>arr[2])
           cout<<"Case "<<i<<": A"<<endl;
           else if(arr[1]>arr[0] && arr[1]>arr[2])
           cout<<"Case "<<i<<": B"<<endl;
           else if(arr[0]==arr[1] || arr[0]==arr[2] || arr[1]==arr[2])
           cout<<"Case "<<i<<": Confused"<<endl;
           else
           cout<<"Case "<<i<<": C"<<endl;
           break;
            }
    }
    return 0;
}
