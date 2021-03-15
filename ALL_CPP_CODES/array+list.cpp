#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
    int n,a[5]={5,6,3,7,21};

     list<int>mylist(a,a+5);
     list<int>::iterator it;
     it=mylist.begin();
     it++;
     cout<<"Enter insert value: ";
     cin>>n;
     mylist.insert(it,n);

     cout<<"The list is: ";
     for(it=mylist.begin();it!=mylist.end();it++)
     cout<<*it<<"\t";

     return 0;

}
