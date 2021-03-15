#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(5);
    v.push_back(20);
    v.push_back(12);
    v.push_back(45);
    vector<int>v1;
    v1.push_back(2);
    v1.push_back(1);
    v1.push_back(4);

    v1.operator=(v);

    vector<int>::iterator it;
    cout<<"V1: ";
    for(it=v1.begin();it!=v1.end();it++)
        cout<<*it<<' ';
}
