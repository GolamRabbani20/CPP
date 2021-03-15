#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,uc=0,lc=0;
    char c[100];
    cin.getline(c,100);
    for(i=0;i<strlen(c);i++)
    {
        for(j=65;j<=90;j++)
            if(c[i]==j)
                uc++;

        for(k=97;k<122;k++)
            if(c[i]==k)
            lc++;
    }
    cout<<uc<<' '<<lc<<endl;
    return 0;
}
