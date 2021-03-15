#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;
int main()
{
    vector<double>v2;
    vector<double>::iterator q;

    v2.push_back(20.36);
    v2.push_back(12.56);
    v2.push_back(14.20);
    v2.push_back(78.03);
    v2.push_back(58.236);
    sort(v2.begin(),v2.begin()+3);
    for(q=v2.begin(); q<v2.end(); q++)
    cout<<*q<<' ';
    return 0;
}
