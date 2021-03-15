#include<bits/stdc++.h>
using namespace std;
int gcd(int Nominator,int Denominator);
int main()
{
    int t,a,b,c,d,Nomi,Denomi,i;
    char op;
    cin>>t;
    for(i=0;i<t;i++)
    {
        scanf("%d / %d %c %d / %d",&a,&b,&op,&c,&d);

        if(op=='+')
        {
            Nomi=(a*d)+(c*b);
            Denomi=b*d;
            cout<<Nomi<<'/'<<Denomi<<' '<<'='<<' '<<Nomi/gcd(Nomi,Denomi)<<'/'<<Denomi/gcd(Nomi,Denomi)<<endl;
        }

        else if(op=='-')
        {
           Nomi=(a*d)-(c*b);
            Denomi=b*d;
            cout<<Nomi<<'/'<<Denomi<<' '<<'='<<' '<<Nomi/gcd(Nomi,Denomi)<<'/'<<Denomi/gcd(Nomi,Denomi)<<endl;
        }

         else if(op=='*')
        {
           Nomi=a*c;
           Denomi=b*d;
           cout<<Nomi<<'/'<<Denomi<<' '<<'='<<' '<<Nomi/gcd(Nomi,Denomi)<<'/'<<Denomi/gcd(Nomi,Denomi)<<endl;
        }

         else if(op=='/')
        {
           Nomi=a*d;
            Denomi=b*c;
            cout<<Nomi<<'/'<<Denomi<<' '<<'='<<' '<<Nomi/gcd(Nomi,Denomi)<<'/'<<Denomi/gcd(Nomi,Denomi)<<endl;
        }
    }
    return 0;
}

int gcd(int Nominator,int Denominator)
{
    int rem;
    int n=Nominator;
    int m=Denominator;
    while(m!=0)
    {
        rem=n%m;
        n=m;
        m=rem;
    }

    if(n<0)
    n=-1*n;

    return n;
}
