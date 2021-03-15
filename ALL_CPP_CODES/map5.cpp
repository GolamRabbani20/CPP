#include<iostream>
#include<map>
#include<iterator>
#include<string>
using namespace std;
int main()
{
    map<string,int>r;
    map<string,int>::iterator i;
    r["Rabbani"]=1808;
    r["Habib"]=1709;
    r["Mehedi"]=1810;
    r.insert(make_pair("Monir",1710));
    for(i=r.begin();i!=r.end();i++)
        cout<<i->first<<"\t"<<i->second<<endl;

    return 0;

}
