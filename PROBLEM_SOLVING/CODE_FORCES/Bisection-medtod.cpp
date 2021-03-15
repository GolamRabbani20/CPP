#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,x,c,f;
    cin>>a>>b;
    int k=1;
    start:
    c=(a+b)/2;
    c=
    f=pow(x,3)-2*pow(x,2)-4;
    cout<<k<<" "<<c<<" "<<f<<endl;
    if(k<=1)
     x=c;
    else{
    if(x==c){
    cout<<"The Require root is:"<<fixed << setprecision(4) <<c<<endl;
    exit(1);
    }
    else if(f>0) b=c;
    if(b==c) x=c;
    else
       a=c;
       if(a==c) x=c;
    }
    k++;
    goto start;
    return 0;
}
