#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,sum=0;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        for(j=1;j<n;j++)
        {
            if(n%j==0)
            sum=sum+j;
        }

        if(sum==n)
        cout<<sum<<" eh perfeito"<<endl;
        else
        cout<<n<<" nao eh perfeito"<<endl;
        sum=0;
    }
    return 0;
}
