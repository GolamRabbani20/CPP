#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s1[100],s2[100],s3[100];

    int n,j,i;
    cin>> n;
    for(int m=0 ; m<n ; m++)
    {
        cin>>s1>>s2;
        int x=strlen(s1);

        int y=strlen(s2);

        if(x==y) {
            j=0;

            for(i=0; i<x; i++)
            {
                s3[j]=s1[i];
                j++;
                s3[j]=s2[i];
                j++;
            }

            for(i=0; i<strlen(s3)-3; i++)
                cout<<s3[i];
            cout<<endl;
        }


        else if(x<y)

        {
               x=strlen(s1);
               y=strlen(s2);
                 j=0;
        {
            for(i=0; i<x; i++)
            {
                s3[j]=s1[i];
                j++;
                s3[j]=s2[i];
                j++;
            }

            for(int g=0; g<strlen(s3)-1; g++)
                cout<<s3[g];
        }
                for(int k=x; k<y; k++)
            cout<<s2[k];
           cout <<endl;
        }



    }






    return 0;
}


