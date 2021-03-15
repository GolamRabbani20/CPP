#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c=0,sum=0;
    start:
    cin>>n;
    if(n==0)
        exit (0);
    else{
        if(n%2==0){
        for(i=n;i<=n+9;i=i+2){
            sum=sum+i;
            c++;
            if(c==5)
            goto display;
        }
        }

        else
        {
            n=n+1;
            for(i=n;i<=n+10;i=i+2){
              sum=sum+i;
              c++;
              if(c==5)
              goto display;
            }
        }
        display:
        cout<<sum<<endl;
        sum=0;
        c=0;
        goto start;
    }
    return 0;
}
