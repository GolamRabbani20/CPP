#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<string,pair<int,pair<int,int> > > > v;
    v.push_back(make_pair("Goblin",make_pair(40,make_pair(66 ,98))));
    cout<<v[0].first<<endl;
    cout<<v[0].second.first<<endl;
    cout<<v[0].second.second.first<<endl;

