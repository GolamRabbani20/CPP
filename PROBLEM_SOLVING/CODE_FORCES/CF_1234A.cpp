#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long t,i,j,q,p;
    cin>>t;
    for(j=0;j<t;j++){
            cin>>q;
            int s=0;
        for(i=0;i<q;i++)
        {
        cin>>p;
        s=s+p;
        }
      cout<<fixed<<int(ceil(float(s)/(q)))<<endl;
    }

     return 0;
}
