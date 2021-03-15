#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,k;
    cin>>t;
   for(i=1;i<=t;i++)
   {
       cin>>n;
       cout<<"Case "<<i<<": ";
       for(k=1;k<=n;k++)
       {
           if(n%k==0)
            cout<<k<<" ";
       }
       cout<<endl;
   }
   return 0;
}
