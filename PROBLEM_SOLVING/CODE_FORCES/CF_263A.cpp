#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,x,y;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cin>>n;
            if(n) x=i,y=j;
        }
    }
    cout<<abs(3-x)+abs(3-y)<<endl;
    return 0;
}
