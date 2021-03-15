#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,j,z,sub=0,t=1;

    DIU:
    cin >> N;
    if(N==0)
        exit;
    else
    {
    cout << "Teste "<<t<<endl;
    for(int i=1; i<=N; i++)
    {
        cin >>j>>z;
        sub = j-z+sub;
        cout <<sub<<endl;
        }
    }
    sub=0;
    t++;
    cout<<endl;
    goto DIU;
    return 0;
}
