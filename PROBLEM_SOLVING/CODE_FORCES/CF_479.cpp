#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,s[5],i=0;
    cin>>a>>b>>c;
    s[0]=a+b*c;
    s[1]=a*(b+c);
    s[2]=a*b*c;
    s[3]=(a+b)*c;
    s[4]=a+b+c;
    int m=s[0];
    for(;i<5;i++) if(m<s[i]) m=s[i];
    cout<<m<<endl;
}
