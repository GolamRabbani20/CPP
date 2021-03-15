#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main()
{
    stack<string>st;                               //Last In First Out
    string n;
    for(int i=0;i<5;i++)
    {
        cin>>n;
        st.push(n);
    }
    cout<<"\nOUTPUT\n";
    while(!st.empty())
    {
        string x;
        x=st.top();
        cout<<x<<endl;
        st.pop();
    }
    return 0;
}
