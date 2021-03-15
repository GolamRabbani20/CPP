#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(12);
    v.push_back(13);
    v.push_back(14);
    v.push_back(15);
    v.push_back(16);
    vector<int>::reverse_iterator rit;
    for(rit=v.rbegin();rit!=v.rend();rit++)
        cout<<*rit<<' ';
        //std::out<<*rit<<' ';
}
