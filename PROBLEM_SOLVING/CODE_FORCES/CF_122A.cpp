#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    cin>>n;
    //cout<<((n%4==0||n%7==0||n%47==0||n%744==0||n%477==0)?"YES":"NO");
    cout<<((n%4 && n%7 && n%47 && n%744 && n%477)?"NO":"YES");
    return 0;
}
