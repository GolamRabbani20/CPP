#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(20);
    v.push_back(12);
    v.push_back(36);
    v.push_back(10);
    v.push_back(120);

    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
        cout<<*it<<"\t";
    return 0;
}
