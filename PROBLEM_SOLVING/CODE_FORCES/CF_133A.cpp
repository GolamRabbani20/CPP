#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    cout<<((s.find('H')!=-1||s.find('Q')!=-1||s.find('9')!=-1)?"YES":"NO");
    return 0;
}
