#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    vector<int>v1;
    v1.push_back(25);
     cout<<v1[0];
     int n;
    for(int i=0;i<5;i++)
    {
        cin>>n;
        v.push_back(n);
    }
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<' ';
    v1.operator=(v);
    cout<<endl<<"V2=";
    for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<' ';
}
