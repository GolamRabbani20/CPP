#include<bits/stdc++.h>
using namespace std;

bool myM(int a,int b)
{
    return (a>b);
}

int main()
{
    vector<int>v;
    vector<int>::iterator m;
    v.push_back(20);
    v.push_back(28);
    v.push_back(2020);
    v.push_back(79);
    v.push_back(25);
    v.push_back(70);
    v.push_back(39);
    v.push_back(1230);
    v.push_back(99);
    v.push_back(205);
    v.push_back(707);
    v.push_back(396);
    v.push_back(120);
    v.push_back(79);
    v.push_back(25);
    v.push_back(70);
    v.push_back(39);
    v.push_back(1);


    cout<<endl;
    cout<<"\tBefore sort: ";
    for(m=v.begin(); m!=v.end(); m++)
        cout<<*m<<' ';

    cout<<endl<<endl;

    cout<<"\tAfter  sort: ";
    sort(v.begin(), v.end());
    for(m=v.begin(); m!=v.end(); m++)
        cout<<*m<<' ';

    cout<<endl<<endl;

    v.clear();

    cout<<"\tDescending order: ";
    sort(v.begin(),v.end(),myM);
    for(m=v.begin(); m!=v.end(); m++)
        cout<<*m<<' ';

    cout<<endl<<endl;
    return 0;
}
