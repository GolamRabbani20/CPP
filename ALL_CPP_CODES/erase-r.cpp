#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    vector<int>::iterator it;
    v.push_back(25);
    v.push_back(15);
    v.push_back(169);

    v.erase(v.begin(),v.end()-1);
    for(it=v.begin();it!=v.end();it++)
        cout<<*it<<' ';
        if(v.empty())
            cout<<"Yes";
            else
        cout<<"No";
}
