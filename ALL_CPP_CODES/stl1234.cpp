#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
bool fn(int x,int y)
{
   return x>y;
}
int main()
{
    vector<int>v;
    vector<int>::iterator it;

    int n;
    for(int i=0;i<5;i++)
    {
        cin>>n;
        v.push_back(n);
    }
    //v.reverse();

    sort(v.begin()+1,v.end()-1,fn);

    for(it=v.begin();it!=v.end();it++)
        cout<<*it<<"\t";
    return 0;
}
