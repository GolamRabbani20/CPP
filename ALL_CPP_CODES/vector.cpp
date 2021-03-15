#include<bits/stdc++.h>
using namespace std;
int main()
{
  int i, n;
  cout<<"Enter vector size: ";
  cin>>n;
    vector<int>v1(n);
    cout<<"Enter the value of array: ";
    for(i=0;i<v1.size();i++)
    {

         cin>>v1[i];
    }

    for(int i=0;i<v1.size();i++)
    cout<<"v1"<<"["<<i<<"]"<<"="<<v1[i]<<endl;

    return 0;
}
