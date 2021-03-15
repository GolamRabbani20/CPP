#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,p=0,n=0,k=0,i,a[100];
    cin>>m;
    for(i=0;i<m;i++){
        cin>>a[i];
        if(a[i]>0)
        p++;
        else if(a[i]<0)
        n++;
        else
         k++;
    }
   int h=ceil((float)m/2);
   if(p>=h)
    cout<<1<<endl;
   else if(n>=h)
    cout<<-1<<endl;
   else if(k>=h)
    cout<<0<<endl;
   else if(n==p)
   {
    if(p<=h)
        cout<<0<<endl;
        else
        cout<<-1<<endl;
   }
   else
    cout<<0<<endl;
   return 0;
}
