#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],b[10],n,q,i,j,k,v;
    cin>>n>>q;
     if (n==0 & q==0)
        exit;
     else{
    for(i=0;i<n;i++)
        cin>>a[i];
    for(j=0;j<q;j++)
        cin>>b[j];
    for(k=0;k<q;k++)
    {
        for(v=0;v<n;v++){
        if(a[k]==a[v])
        cout<<b[k]<<" is found at "<<v+1<<endl;
        }
       //cout<<b[j]<<" is not found"<<endl;
    }
     }
    return 0;
}
