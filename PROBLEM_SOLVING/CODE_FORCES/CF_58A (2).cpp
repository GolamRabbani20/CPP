#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str; cin>>str;

    cout<<(regex_match(str, regex(".*r.*a.*b.*b.*a.*n.*i.*")) ? "YES" : "NO");
}
