#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    for(i=0; i<n; i++)
    {
        char s[100];
        cin.getline(s,100);
        cout<<s[0]<<strlen(s)<<s[strlen(s)-1];
    }
    return 0;
}

