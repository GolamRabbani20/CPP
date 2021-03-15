#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(5);
    v.push_back(20);
    v.push_back(12);
    v.push_back(45);


    vector<int>::iterator it;
    v.emplace_back(it,10);
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<' ';



}
