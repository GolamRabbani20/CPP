#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<char>v1;
    vector <char> v2;
    char x;
    for(int i=0; i<5 ; i++){
        cin >> x;
        v1.push_back(x);
    }
    for(int i=0; i<7 ; i++){
        cin >> x;
        v2.push_back(x);
    }
    v1.swap(v2);
    for(int i=0; i<7 ; i++){
        cout << v1[i];
    }
    cout<<endl;
        for(int i=0; i<5 ; i++){
        cout << v2[i];
    }


}
