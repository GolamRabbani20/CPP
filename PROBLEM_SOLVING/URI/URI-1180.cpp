#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a[1000],i,x,n;
  cin>>n;
  for(i=0;i<n;i++)
    cin>>a[i];
    int minimum=a[0];
  for(i=1;i<n;i++)
    {
        if(a[i]<minimum){
        minimum=a[i];
         x=i;
        }
    }
  cout<<"Menor valor: "<<minimum<<endl;
  cout<<"Posicao: "<<x<<endl;
  return 0;
}
