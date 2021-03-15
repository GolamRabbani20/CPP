#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,c=0;
    long long x;
    cin>>n>>x;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        if(i*j==x) c++;
    }
    cout<<c;

}


