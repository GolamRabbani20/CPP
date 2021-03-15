#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;//cout<<(regex_match(s,regex(".*B.*a.*n.*g.*l.*a.*d.*e.*s.*h.*"))?"Yes":"No");
    if(regex_match(s,regex(".*I.*(love)(.*)")))
        cout<<"Y";
    else
        cout<<"N";

}
