#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,m,a[100],ab=0,p=0;
    cin>>n>>m;
    for(i=0;i<n;i++)
    cin>>a[i];

    for(i=0;i<n;i++)
    {
        if(a[i]>0)
            ab++;
            else
            p++;
    }

     if(ab<p)
     cout<<"YES"<<endl;
     else
    cout<<"NO"<<endl;
     return 0;
}
