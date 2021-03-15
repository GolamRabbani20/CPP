#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,b,i,eb,x,s,rem;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>b>>eb;
        if(b<eb)
        cout<<b<<endl;
        else
        {
            rem=b%eb;
            x=b/eb;
            s=rem+x;
            cout<<s<<endl;
        }
    }
    return 0;
}
