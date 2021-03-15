#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
    list<int>w(60,5);
    list<int>::iterator m;

    for(m=w.begin();m!=w.end();m++)
    cout<<*m<<"\t";
    return 0;
}
