#include<iostream>
#include<utility>
using namespace std;
int main()
{
    pair<string,int>p;
    p=make_pair("Monir",1742);
    p.first="Rabbani";
    p.second=1808;

    cout<<p.first<<' '<<p.second<<endl;
    return 0;
}
