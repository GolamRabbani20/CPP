#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,s[3],sum=0;
    cin>>t;
    while(t--)
    {
        for(int j=0; j<3; j++)cin>>s[j];
        for(int i=0; i<3; i++)
        sum=sum+s[i];
    }
    cout<<((sum==0)?"YES":"NO");
    return 0;
}
