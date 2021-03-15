#include<iostream>
#include<utility>
#include<vector>
using namespace std;
int main()
{
    vector<pair<string,int> >v;
    v.push_back(make_pair("Kamal",1478));
    v.push_back(make_pair("Raju",1845));
    v.push_back(make_pair("Hanif",7564));
    cout<<v[0].first<<"\t"<<v[0].second<<endl;
    cout<<v[1].first<<"\t"<<v[1].second<<endl;
    return 0;
}
