#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i,n,m,count=0;
    vector<int>v;
    cin>>n;
    for(i=0;i<n-1;i++){
            cin>>m;
        v.push_back(m);
    }

    for(i=0;i<n;i++)
    {
        for(i=0;i<n;i++){
        if(v[i]<v[i+1])
           continue;
        }


            count++;
            //break;

    }

    if(count==1)
        cout<<"No"<<endl;
    else
    cout<<"Yes"<<endl;
    return 0;
}
