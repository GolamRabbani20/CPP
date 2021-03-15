#include<bits/stdc++.h>
using namespace std;
int main()
{
    int uc=0,lc,i;
    char a[100];
    cin.getline(a,100);
    for(i=0;i<strlen(a);i++)
    {
        for(int j=64;j<=95;j++)
        if(a[i]==j)
            uc++;
        else
            lc=strlen(a)-uc;
    }

    cout<<uc<<' '<<lc<<endl;
    return 0;
}
