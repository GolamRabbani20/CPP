#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[101],s1[101];
    cin>>s;
    strrev(s);
    cin>>s1;
    int flag = 0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]==s1[i])
        flag++;
    else
    flag = 0;
    }
    if(flag ==strlen(s))
    cout <<"YES"<<endl;

    else
    cout <<"NO"<<endl;
    return 0;
}
