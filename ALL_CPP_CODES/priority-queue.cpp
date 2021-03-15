#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<string>pq;
    string s,m;
    for(int i=0;i<3;i++)        // Lecico graphical order a sorted hobe
                                 // That means input=A ,B,C,D;  Output=D,C,B,A;
    {
        cin>>s;
        pq.push(s);
    }

     cout<<endl;
    while(!pq.empty())
    {
      m=pq.top();
      cout<<m<<endl;
      pq.pop();
    }
    return 0;
}
