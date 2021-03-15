#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,p;
    cin>>n>>p;
    n=(n+1)/2;
    cout<<(p>n ? 2*(p-n): 2*p-1);
}
