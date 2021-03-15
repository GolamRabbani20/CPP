#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v;
    vector<int>::iterator it;
    int n,i,m;
    cin>>n;

    for(i=0;i<n;i++)
    {
       cin>>m;
       v.push_back(m);
    }

     if(sort(v.begin(),v.end()))
        cout<<"Yes";

    for(it=v.begin();it!=v.end();it++)
    cout<<*it<<"\t";
    return 0;
}
