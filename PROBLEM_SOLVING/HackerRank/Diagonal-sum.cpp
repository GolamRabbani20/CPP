#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,i,k,j,sum1=0,sum2=0;
    cin>>n;
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
         cin>>a[i][j];
    }
    j=0;
    k=n-1;
    for(i=0;i<n;i++)
    {
       if(i==j)
        sum1=sum1+a[i][j];

       sum2=sum2+a[i][k];
       k--;
       j++;
    }
  int r=sum1-sum2;
  cout<<abs(r)<<endl;
  return 0;
}
