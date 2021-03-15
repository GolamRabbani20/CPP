#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
#include<list>
using namespace std;
int main()
{
    list<int>v;
    list<int>::iterator it;
    int n;
    for(int i=0;i<5;i++)
    {
        cin>>n;
        v.push_back(n);
    }

    v.reverse();
    for(it=v.begin();it!=v.end();it++)
    cout<<*it<<"\t";
    return 0;
}

