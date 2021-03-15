#include<iostream>
#include<iterator>
#include<list>
#include<algorithm>
using namespace std;
int main()
{
    int v,p,q,i,arr[100];

    cout<<"Enter array size: ";
    cin>>p;
    cout<<"Enter array elements: ";
    for(i=0; i<p; i++)
    cin>>arr[i];

    list<int>a (arr,arr+p);
    list<int>::iterator n;

    cout<<"Please enter pointing value: ";
    cin>>q;
    n=find(a.begin(),a.end(),q);
    cout<<"Iterator is pointing now: "<<*n<<endl<<endl;

    int r;
    cout<<"Enter insert value: ";
    cin>>r;
    a.insert(n,r);

    cout<<"After inserting the value before "<<*n<<" the list is: ";
    for(n=a.begin(); n!=a.end(); n++)
    cout<<*n<<"\t";
    cout<<endl;

    cout<<"Enter the element that you want to erase: ";
    cin>>v;
    n=find(a.begin(),a.end(),v);
    a.erase(n);

    cout<<endl<<"After erasing the first value "<<*n<<" the list is: ";
    for(n=a.begin();n!=a.end();n++)
    cout<<*n<<"\t";
    cout<<endl;

    return 0;
}
