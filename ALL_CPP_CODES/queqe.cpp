#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int>q;            //FIFO

    int n;
    for(int i=0;i<5;i++){
    cin>>n;
    q.push(n);
    }
    while(!q.empty())
    {

      int x=q.front();
      cout<<x<<"\t";
      q.pop();

    }
    return 0;
}
