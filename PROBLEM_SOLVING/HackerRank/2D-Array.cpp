#include<iostream>
using namespace std;
int main()
{
    int i,j,maxx=0,x[4][4],A[6][6];
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
            cin>>A[i][j];
    }


    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            x[i][j]=A[i][j]+A[i][j+1]+A[i][j+2]+A[i+1][j+1]+A[i+2][j]+A[i+2][j+1]+A[i+2][j+2];

        }
    }
/*
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
           cout<<x[i][j]<<" ";
        }
        cout<<endl;
    }
    */
for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(x[i][j]>maxx)
                maxx=x[i][j];
        }
    }
    cout<<maxx;
    return 0;
}

