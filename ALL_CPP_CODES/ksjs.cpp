#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v1;
    v1.push_back(20);
    v1.push_back(52);
    v1.push_back(23);
    v1.push_back(21);
    vector<int>v2;
    v2.push_back(12);
    v2.push_back(10);
    v2.push_back(19);
    v2.insert(v2.end(),v1.begin(),v1.end());
    for(int i=0;i<v2.size();i++)
    cout<<v2[i]<<"\t";
}

