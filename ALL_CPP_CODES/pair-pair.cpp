#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<pair<int,int>,string>arr[100];

    int n;
    cout<<"Enter the value of N:";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x,y;
        string s;
        cin>>x>>y>>s;
        arr[i].first.first=x;
        arr[i].first.second=y;
        arr[i].second=s;
    }
    cout<<endl<<endl<<endl;
    cout<<"OUTPUT"<<endl;
    for(int i=0; i<n; i++)
    cout<<arr[i].first.first<<' '<<arr[i].first.second<<' '<<arr[i].second<<endl;
    return 0;
}
