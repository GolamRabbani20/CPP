#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n=0,k=0,m,c;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>m>>c;
        if(m>c)
           n++;
        else if(m<c)
            k++;
    }

    if(n>k)
    cout<<"Mishka"<<endl;
    else if(n<k)
    cout<<"Chris"<<endl;
    else
    cout<<"Friendship is magic!^^"<<endl;
    return 0;
}
