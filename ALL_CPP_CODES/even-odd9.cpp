#include<bits/stdc++.h>
using namespace std;
int main()
{

   vector<int>v;
   v.push_back(20);
   v.push_back(12);
   v.push_back(14);
   v.push_back(15);

   for(int i=0;i<4;i++)
    cout<<v[i]<<"\t";
    cout<<endl<<v.at(3);
   return 0;
}
