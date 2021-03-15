#include<bits/stdc++.h>
using namespace std;
int main()
{
    double V,N;
    cin>>V>>N;
    for(int i=1;i<=9;i++)
    {
     cout<<ceil((V*N*i)/10)<<" ";
    }
    cout<<endl;
    return 0;
}

