#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[20];
    cin.getline(s,20);
    if(s==strrev(s))
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
    return 0;
}
