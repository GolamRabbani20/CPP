#include <bits/stdc++.h>
#include<regex>
using namespace std;
int main()
{
    string str; cin>>str;
    cout<<(regex_match(str, regex(".*h.*e.*l.*l.*o.*")) ? "YES" : "NO");
}

