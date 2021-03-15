#include<iostream>
#include<iterator>
#include<list>
using namespace std;
int main()
{
    int ar[5]={5,9,6,21,3};
    list<int>l(ar,ar+5);
    list<int>::iterator it;

    cout<<"The list is:";
    for(it=l.begin();it!=l.end();it++)
    cout<<*it<<"\t";

    while(l.end()!=l.empty())
        l.pop_front();

        cout<<"\n";
        cout<<"The final list is:";
    for(it=l.begin();it!=l.end();it++)
        cout<<*it<<"\t";

    return 0;
}
