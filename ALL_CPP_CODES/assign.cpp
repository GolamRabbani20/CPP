#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int n;
    for(int i=0;i<5;i++)
    {
        cin>>n;
        v.push_back(n);
    }
    vector<int>v1;
    v1.assign(v.begin()+2,v.end());
    for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<' ';
}
