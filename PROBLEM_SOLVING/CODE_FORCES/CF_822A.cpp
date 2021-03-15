#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,i,q;
    unsigned long long m=1,p=1;
    cin>>n>>q;
    for(i=1;i<=n;i++)
        m=m*i;
    for(i=1;i<=q;i++)
    p=p*i;
    while(p!=0)
    {
        r=m%p;
        m=p;
        p=r;
    }
    cout<<m<<endl;
    return 0;
}
