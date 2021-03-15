#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,i,r[4],j=3,k,m,c=0;
    cin>>y;
    for(i=y+1; i<=9000;)
    {
        while(i!=0)
        {
            r[j]=i%10;
            i=i/10;
            j--;
        }
        if(r[0]!=r[1]&&r[0]!=r[2]&&r[0]!=r[3]&&r[1]!=r[2]&&r[1]!=r[3]&&r[2]!=r[3])
         break;
         else
         i++;
    }
           for(j=0;j<4;j++)
            cout<<r[j];
    return 0;
}


