#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,r,c=0;
    cin>>n;
    while(n!=0)
    {
        r=n%10;

        if(r==4||r==7)
            c++;
        n=n/10;
    }
    cout<<((c==4||c==7)?"YES":"NO");
    return 0;
}
