#include<iostream>
#include<map>
#include<iterator>
#include<string>
using namespace std;
int main()
{

    map<string,int>m;
    map<string,int>::iterator it;

    string str;
    int p,id;
    cout<<"Enter number of members:";
    cin>>p;
    cout<<endl;

    for(int i=0;i<p;i++){
    cout<<"Enter name & ID:";
    cin>>str>>id;
    m.insert(make_pair(str,id));
    }
    cout<<"\n\n\n";
    cout<<"THE MAP IS:\n";
    cout<<"........................\n";

    for(it=m.begin();it!=m.end();it++)
    cout<<it->first<<"\t"<<it->second<<endl;

    return 0;
}
