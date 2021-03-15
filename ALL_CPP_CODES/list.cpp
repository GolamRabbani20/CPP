#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
    list<int>l;
    list<int>::iterator it;
    l.push_back(25);
    l.push_back(21);
    l.push_back(78);
    l.push_back(00);
    l.push_back(45);
    l.push_back(96);
    l.push_front(1);
    l.push_back(12);
    l.push_front(-5);


    cout<<"Size of the list is :"<<l.size()<<endl;

    cout<<"The list is: ";
    for(it=l.begin(); it!=l.end(); it++)
    cout<<*it<<' ';
    cout<<endl;

    l.clear();

    l.reverse();
    cout<<"After reversing the elements: ";
    for(it=l.begin(); it!=l.end(); it++)
    cout<<*it<<' ';
    cout<<endl;



    return 0;
}
