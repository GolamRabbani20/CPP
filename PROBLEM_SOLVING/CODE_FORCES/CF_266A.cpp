#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,x=0,i=0;
    cin>>n>>s;
    while(i<n)
    {
        if(s[i]==s[i+1])
            x++;
            i++;
    }
    cout<<x<<endl;
}
