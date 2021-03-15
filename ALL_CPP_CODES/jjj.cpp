#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }


    reverse(v.begin(),v.end());
    //v.erase(v.begin()+0,v.size()+1);
    v.pop_back();
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
