#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,a,s,c=0,p,x[100],y[100];
    cin>>a>>s>>p;
    for(i=0;i<s;i++)
        cin>>x[i];
    for(i=0;i<p;i++)
        cin>>y[i];
    i=0;
    legend:
    int flag=0;
    for(j=0;j<p;j++)
        if(y[j]==x[i])
        flag=1;
    if(flag==0) // missing number count
        c++;
    i++;
    if(i<s)
    goto legend;
    else
    goto display;
    display:
    cout<<c<<endl;
  return 0;
}
