#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p=0,i,a[1000],n;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
            p++;
    }
    cout<<p<<endl;
    return 0;
}
