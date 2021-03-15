#include<iostream>
using namespace std;
int main(){
int n,a[10],i,k;
long long int sum=0;

cin>>n;
for(i=0;i<n;i++)
    cin>>a[i];
    //a[i]=v;

for(k=0;k<n;k++)
    sum=sum+a[k];

cout<<sum<<endl;
return 0;



}
