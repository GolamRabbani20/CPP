#include<bits/stdc++.h>
using namespace std;
   int l = 0;
 int k=1;
int main()
{
    int N,J,Z;
    hell:
    cin >> N;
    if(N==0)
        exit(0);
    else
    {
    cout << "Teste "<<k<<endl;
    for(int i=1; i<=N; i++)
    {
        cin >> J >> Z;
        l = J-Z+l;
        cout << l<<endl;
        }
    }
    l=0;
    k++;
    cout<<endl;
    goto hell;
    return 0;
}
