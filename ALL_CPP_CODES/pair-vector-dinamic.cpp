#include<iostream>
#include<utility>
#include<vector>
#include<iterator>
#define size 3
using namespace std;
int main()
{
    int i;
    vector<pair<string,double> >v;
    vector<pair<string,double> >::iterator it;

    string str;
    double price;
    for(i=0;i<3;i++){
    cout<<"\tEnter item name & Price: ";
    cin>>str>>price;
    v.push_back(make_pair(str,price));
}
    cout<<"\n";
    for(i=0;i<3;i++){
    cout<<"\t";
    cout<<v[i].first<<"\t"<<v[i].second<<endl;
    }
    return 0;
}
