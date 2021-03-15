#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,m,s=0;
    cin>>n;
    string a,b;
    cin>>a>>b;
    while(n--){
        x=abs(a[n]-b[n]);
        m=10-x;
        s=s+min(x,m);
    }
    cout<<s;
}
