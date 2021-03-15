#include<bits/stdc++.h>
using namespace std;
bool prime(int n);
int main()
{
    int n;
    cin>>n;
    cout<<prime(n);
}

  bool prime(int n)
  {
      long long i;
      for(i=2;pow(i,2)<n;i++){
        if(n%i==0)
        return false;
        //break;

      }

       return true;

  }
