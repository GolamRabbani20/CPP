#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int>pq;

    int i,n;
    for(i=0;i<5;i++)
    {
        cin>>n;
        pq.push(n);
    }

     cout<<endl;
    while(!pq.empty())
    {
        int x;
        x=pq.top();
        cout<<x<<endl;
        pq.pop();
    }
    return 0;
}
