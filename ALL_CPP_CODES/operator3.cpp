#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<string> v;
v.push_back("Rabbani");
v.push_back("Java");
v.push_back("Kamrul");
//for(int i=0;i<v.size();i++)
cout<<v.operator[](0)<<" ";
return 0;
}
