#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j=1,k,n,a[1000];
    cin>>n>>k;
    for(i=1;i<=n;i=i+2)
    {
        a[j]=i;
        j++;
    }

    for(i=2;i<=n;i=i+2)
    {
        a[j]=i;
        j++;
    }
    cout<<a[k]<<endl;
    return 0;
}
