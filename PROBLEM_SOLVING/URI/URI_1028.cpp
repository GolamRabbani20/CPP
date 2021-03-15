#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n1,n2,i,rem;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n1>>n2;

        if(n1>n2)
        {
            while(n2!=0)
            {
                rem=n1%n2;
                n1=n2;
                n2=rem;
            }
            cout<<n1<<endl;
        }
        else if(n2>n1){
                while(n1!=0)
            {
                rem=n2%n1;
                n2=n1;
                n1=rem;
            }
            cout<<n2<<endl;
        }
    }

    return 0;
}
