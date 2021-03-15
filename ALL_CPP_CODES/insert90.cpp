#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>v;
    v.push_back("Bangladesh");
    string s="habib";
   v.insert(v.begin()+1,5,s);
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<' ';
}
