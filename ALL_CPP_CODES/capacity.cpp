#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int n;
    for(int i=0;i<5;i++)
    {
        cin>>n;
        v.push_back(n);
    }
    int c=v.capacity();
    cout<<c<<endl;
}
