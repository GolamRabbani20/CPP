#include <iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
vector<char> v;
char ch;
for(int i=0;i<10;i++)
{
cin>>ch;
v.push_back(ch);
}
vector<char>::reverse_iterator rtr;
for(rtr=v.rbegin();rtr!=v.rend();rtr++)
std::cout<< *rtr;
return 0;
}
