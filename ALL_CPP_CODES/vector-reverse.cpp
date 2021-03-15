#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>

using namespace std;
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

    reverse(v.begin(),v.begin()+5);

    for(it=v.begin();it!=v.end();it++)
    cout<<*it<<"\t";
    return 0;
}
