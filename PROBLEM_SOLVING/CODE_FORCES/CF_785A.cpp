#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int i,t,sum=0;
    cin>>t;
    for(i=0;i<=t;i++)
    {
        getline(cin,a);
        if("Tetrahedron"==a)
         sum=sum+4;

         else if("Cube"==a)
          sum=sum+6;

          else if("Octahedron"==a)
          sum=sum+8;

          else if("Dodecahedron"==a)
          sum=sum+12;

          else if("Icosahedron"==a)
          sum=sum+20;
    }
    cout<<sum<<endl;
    return 0;
}
