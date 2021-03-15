#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0 ;i<n;i++){
    int m;
    cin>>m;

    if(m==1)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    else if(m==2)
    {


        reverse(v.begin()+0, v.end());
        v.pop_back();
        reverse(v.begin()+0, v.end());
    }

    else if(m==3)
    {
        cout<<v[0]<<endl;
    }
    }
    return 0;
}
