#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=0,y=0,z=0,i,m,n,t,p;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>m;
         x=x+m;

        cin>>n;
         y=y+n;

        cin>>p;
        z=z+p;
    }
    cout<<((x==0&&y==0&&z==0)?"YES":"NO");
    return 0;
}
