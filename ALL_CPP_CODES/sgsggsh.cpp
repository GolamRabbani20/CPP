#include<bits/stdc++.h>
using namespace std;
int i,t;
int main()
{
    char s[100];
    cin>>t;
    for(i=1;i<=t;i++){
    cin>>s;
    cout<<s[0]<<strlen(s)-2<<s[strlen(s)-1]<<endl;
    }
 return 0;
}
