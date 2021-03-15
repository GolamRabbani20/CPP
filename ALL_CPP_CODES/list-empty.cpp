#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
    int ar[7]={5,6,23,21,2,9,8};
    list<int>l(ar,ar+7);
    list<int>::iterator it;

        cout<<"The array is: ";
        for(int i=0;i<6;i++)
        cout<<ar[i]<<"\t";

       cout<<"\n";
       cout<<"The  list is: ";
       for(it=l.begin();it!=l.end();it++)
       cout<<*it<<"\t";

       cout<<"\n\n";
       cout<<"After pop the elements: ";

       l.pop_front();
       l.pop_back();
       l.pop_back();
       l.pop_front();
       l.pop_back();
       l.pop_back();

       for(it=l.begin();it!=l.end();it++)
       cout<<*it<<"\t";




    cout<<endl<<"\n";
    if(l.empty())
    cout<<"Empty"<<endl;
    else
    cout<<"Fill Up"<<endl;

    cout<<l.back()<<"\t";
    cout<<l.front();
    cout<<"\n\n";

    return 0;
}
