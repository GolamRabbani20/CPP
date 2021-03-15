#include<iostream>
#include<map>
#include<set>
using namespace std;
int main()
{
    multiset<int>s;
    multiset<int>::iterator it;
    int n,i;
    for(i=0;i<5;i++)
    {
        cin>>n;
        s.insert(n);
    }

    cout<<endl;
    for(it=s.begin();it!=s.end();it++)
    cout<<*it<<endl;
    return 0;
}
