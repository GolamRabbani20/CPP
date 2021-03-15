#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,even=0,odd=0;
    cin>>n;
    while(n>=0)
    {
        if(n%2==0)
        even+=n;
        else
        odd+=n;
        --n;
    }
    cout<<odd-even<<endl;
    return 0;
}
