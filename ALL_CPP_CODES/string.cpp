#include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     char r[10],r2[10];
     cin.getline(r,10);
     strcpy(r2,r);
     cout<<strupr(r2)<<endl<<strlwr(r2)<<endl<<strlen(r2);

     return 0;
 }
