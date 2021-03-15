#include<iostream>
using namespace std;
int main()
{
    int j,i,n,x[10000];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>x[i];
    for(j=n-1;j>=0;j--)
        cout<<x[j]<<" ";

    return 0;
}
