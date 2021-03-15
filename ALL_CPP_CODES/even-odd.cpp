#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,even=0,odd=0;
    cin>>n;
    for(i=0;i<=n;i++)
    {
        if(i%2==1)
        odd+=i;
        else
        even+=i;
    }
    cout<<odd-even<<endl;
    return 0;
}
