#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    multimap<string,int>mp;
    multimap<string,int>::iterator it;
    int n;
    string st;
    for(int i=0;i<3;i++)
    {
        cin>>st>>n;
        mp.insert(make_pair(st,n));

    }
    cout<<endl;
    for(it=mp.begin();it!=mp.end();it++)
    cout<<it->first<<"\t"<<it->second<<endl;
    return 1;
}
