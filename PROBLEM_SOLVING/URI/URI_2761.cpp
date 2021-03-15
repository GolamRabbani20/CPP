#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2,s3;
    int i;

    getline(cin,s1);
    int l1 = s1.size();
    getline(cin,s2);
    int l2 = s2.size();
    getline(cin,s3);
    int l3 = s3.size();

    cout << s1 << s2 << s3<< endl;
    cout << s2 << s3 << s1<< endl;
    cout << s3 << s1 << s2<< endl;

    if(l1>=10)
    for(int i=0; i<10;i++)
    cout << s1[i];

    else
    for(int i=0; i<l1;i++)
    cout << s1[i];

    if(l2>=10)
    for(int i=0; i<10;i++)
    cout << s2[i];

    else
    for(int i=0; i<l2;i++)
    cout << s2[i];


    if(l3>=10)
    for(int i=0; i<10;i++)
    cout << s3[i];

    else
    for(int i=0; i<l3;i++)
    cout << s3[i];

    cout <<endl;

    return 0;
}
