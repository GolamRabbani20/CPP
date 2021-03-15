#include<iostream>
#include<list>
#include<vector>
using namespace std;
int main()
{
    list<int>l;
    list<int>::iterator it;
    l.push_back(25);
    l.push_front(1);
    if(l.empty())
        cout<<"Empty"<<endl;
    else
        cout<<"Full up"<<"\n";

        for(it=l.begin();it!=l.end();it++)
        cout<<"\t"<<*it<<"\t";
}
