#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m,n,flag=1,i,c=0;
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        while(m<=n)
        {
            for(i=2;i<m;i++){
                if(m%i==0)
                flag++;
            }

             if(flag==1 && m>1){
             c++;
             cout<<m<<"\t";
             }
            m++;
            flag=1;
    }

        cout<<"Total Prime number is: "<<c<<endl;
        c=0;
        cout<<endl<<endl;

    }
    return 0;
}
