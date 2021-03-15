#include<bits/stdc++.h>
using namespace std;
int permutation(int n);
int main()
{
    int n,r,p;
    cin>>n>>r;
    p=permutation(n)/permutation(n-r);
    cout<<p<<endl;
}


int permutation(int n)
{
    if(n<=1)
    return 1;
    else
    return n*permutation(n-1);
}
