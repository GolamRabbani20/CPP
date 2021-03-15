#include<iostream>
#include<iterator>
#include<set>
#include<string>
using namespace std;
int main()
{
    set<string>s;
    set<string>::iterator it;
    s.insert("Habib");
    s.insert("Rabbani");
    s.insert("Mehedi");
    s.insert("Joy");
    s.insert("DIU");
    s.insert("Savar");


    pair<set<string>::iterator,bool>p;
    p=s.insert("Habib");
    if(p.second==false)
        cout<<"Can't insert\n";
    else
        cout<<"Inserted\n";

    cout<<"\n";
    for(it=s.begin();it!=s.end();it++)
        cout<<*it<<"\n";
}
