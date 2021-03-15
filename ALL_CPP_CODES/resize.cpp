#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int>v;
    for(int i=0;i<5;i++)
    {
        cin>>n;
        v.push_back(n);
    }
    v.resize(3);
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<' ';

    v.clear();
    if(v.empty())
        cout<<"Yes";
    else
        cout<<"No";
    return 0;

}
