#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,a,b;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            cin>>t;
           if(t)
            {
                a=i;
                b=j;
            }
        }
    }
    cout<<(abs(i-3)+abs(j-3));
    return 0;
}
