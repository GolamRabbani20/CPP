#include<bits/stdc++.h>
using namespace std;
int main()
{
   unsigned long long n,c=1;
    cin>>n;
    while(n!=1)
    {
        if(n%2==0)
        n=n/2;

        else
        n=3*n+1;
        c++;
    }
    cout<<c<<endl;
    return 0;
}
