#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cin>>s;
   int i,c=1;
   for(i=1;i<s.length();i++){
    if(s[i]>96)
    c=0;
   }
   if(c){
    if((int)s[0]>96)
    s[0]=s[0]-32;
   else
   s[0]=s[0]+32;
   for(i=1;i<s.length();i++){
    if(s[i]<96)
    s[i]=s[i]+32;
   }
   }
   cout<<s<<endl;
   return 0;
}



