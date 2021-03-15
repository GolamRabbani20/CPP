#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,a,b,k=0,m=0;
    for(cin>>n;n--;)
    {
        cin>>a>>b;
        k=k+b-a;
        if(m<k)
         m=k;
    }
    cout<<m<<endl;
    return 0;
}
