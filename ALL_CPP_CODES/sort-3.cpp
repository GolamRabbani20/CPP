#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,ar[100];

    cout<<"Enter array size: ";
    cin>>n;

    cout<<"Please enter array elements: ";
    for(i=0;i<n;i++)
    cin>>ar[i];

    sort(ar+1,ar+n-1);

    for(i=0;i<n;i++)
    cout<<ar[i]<<' ';

    return 0;
}
