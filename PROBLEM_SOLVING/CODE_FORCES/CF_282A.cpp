#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,X=0,i;
    cin>>n;
    string s;
    for(i=0; i<n; i++)
    {
        cin>>s;
        if(s=="++X")
            ++X;

        else if (s=="X++")
            X++;

        else if(s=="X--")
            X--;

        else if(s=="--X")
            --X;
    }
    cout<<X<<endl;
    return 0;
}
