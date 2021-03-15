#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1="hello";
    int i,j=0;
    cin>>s;
    for(i=0;i<s.length();i++) if(s[i]==s1[j]) j++;
    (j==5)?cout<<"YES":cout<<"NO";
    return 0;
}
