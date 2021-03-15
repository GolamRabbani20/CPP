#include<bits/stdc++.h>
using namespace std;
int i,t;
int main()
{
    char s[100];
    cin>>t;
    for(i=1;i<=t;i++){
    cin>>s;
    if(strlen(s)>10)
    cout<<s[0]<<strlen(s)-2<<s[strlen(s)-1]<<endl;
    else
    cout<<s<<endl;
    }
 return 0;
}
