#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string s1;
    cin>>s;
    reverse(s.begin(),s.end());
    cin>>s1;
    if(s==s1)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;

}
