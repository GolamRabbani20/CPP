#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long a,b,s,r,k=0;
    cin>>a>>b;
    s=a+b;
    while(s!=0)
    {
        r=s%10;
        k=k+r;
        s=s/10;
    }
    cout<<k<<endl;
    return 0;
}
