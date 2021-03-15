#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            cin>>n;
            if(n)
            {
                a=i;
                b=j;
            }
        }
    }

    cout<<abs(3-a)+abs(3-b)<<endl;
    return 0;
}
