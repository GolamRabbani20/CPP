#include<iostream>
using namespace std;
int main()
{
    int n,m,i,k,r;
    cin>>n>>r;
    int A[n],B[n];
    for(i=0;i<n;i++)
        cin>>A[i];
    m=n-r;
    int p=0;
    for(k=0;k<n;k++)
    {
        if(k<r){
        B[m]=A[k];
        m++;
        }
        else{
        B[p]=A[k];
        p++;
        }
    }

    for(int j=0;j<n;j++)
        cout<<B[j]<<" ";

    return 0;

}
