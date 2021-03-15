#include<bits/stdc++.h>
using namespace std;
int main()
{
    //vector<pair<string,int> >v;
    int t,wh,th;
     string s;
    cin>>t>>wh;
    for(int i=0;i<t;i++)
    {
        getline(cin,s);
        cin>>th;
        if(wh<th)
        cout<<s<<endl;
    }
}
