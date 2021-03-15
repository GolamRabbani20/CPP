#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    vector<int>v;
    vector<int>::iterator r;
    int i;
    for(i=1;i<=5;i++)
        v.push_back(i);
    for(i=0;i<v.size();i++)
        cout<<v[i]<<"\t";

     for(r=r.begin();r <= r.end();r++)
       cout<<endl<<*r<<endl;

    return 0;
}
