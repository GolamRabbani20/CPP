#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000];
    cin>>a;
    for(int i=97;i<=122;i++){
        if(a[0]==i)
         a[0]=i-32;
    }
    cout<<a<<endl;
    return 0;
}
