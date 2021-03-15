#include<iostream>
#include<set>
#include<iterator>
#define size 5
using namespace std;
int main()
{
    set<int>s;
    set<int>::iterator it;
    s.insert(25);
    s.insert(20);
    s.insert(12);
    s.insert(123);
    s.insert(50);
    s.insert(20);



    for(it=s.begin();it!=s.end();it++)
    cout<<*it<<"\t";
}
