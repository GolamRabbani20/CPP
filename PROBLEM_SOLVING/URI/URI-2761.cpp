#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c;
    int i;
    getline(cin,a);
    int len1=a.size();

    getline(cin,b);
    int len2=b.size();

    getline(cin,c);
    int len3=c.size();

    cout<<a<<b<<c<<endl;
    cout<<b<<c<<a<<endl;
    cout<<c<<a<<b<<endl;

    if(len1>=10)
        for(i=0;i<10;i++)
        cout<<a[i];
    else
        for(i=0;i<len1;i++)
        cout<<a[i];

    if(len2>=10)
        for(i=0;i<10;i++)
        cout<<b[i];
    else
        for(i=0;i<len2;i++)
        cout<<b[i];

        if(len3>=10)
        for(i=0;i<10;i++)
        cout<<c[i];
    else
        for(i=0;i<len3;i++)
        cout<<c[i];
        cout<<endl;

    return 0;
}
