#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,x=0;
    cin>>n;
    while(n--)cin>>a,x+=a;
    (x>0)?cout<<"HARD":cout<<"EASY";
    return 0;
}
