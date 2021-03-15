#include<bits/stdc++.h>
using namespace std;
int i,j;
int main()

{
    char s[100];
    cin>>s;
    strlwr(s);
    for(i=0; i<strlen(s); i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')
        {
            s[i]=s[j];
            j++;
        }
        else
        cout<<"."<<s[i];
    }
    return 0;
}
