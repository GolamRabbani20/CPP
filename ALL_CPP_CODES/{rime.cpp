#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=2,flag=1;
    cin>>n;
    while(i<n)
    {
        if(n%i==0)
          flag++;
        i++;
    }
    if(flag==1)
        cout<<n<<" is prime."<<endl;
        else
        cout<<n<<" is not prime!"<<endl;

        return 0;
}
