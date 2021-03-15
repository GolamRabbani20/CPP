#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int f=0,c=0,i=0;
    int n=10;


    for(; s[i];)(s[i++]<'a')?f++:c++;
    if(c>=f){for(i=0; s[i]; i++)if(s[i]<97) s[i]=s[i]+32;cout<<s<<endl;}

    else {for(i=0; s[i]; i++)if(s[i]>=97) s[i]=s[i]-32;cout<<s<<endl;}

    return 0;
}
