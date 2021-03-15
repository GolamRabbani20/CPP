#include<stdio.h>
int main()
{
    int i,j,n;
    int ara[7];
    int notes[7]={100,50,20,10,5,2,1};
    scanf("%d",&n);
    printf("%d\n",n);
    for(i=0;i<7;i++)
    {
        ara[i]=n/notes[i];
        n=n%notes[i];
    }
    for(j=0;j<7;j++)
    printf("%d nota(s) de R$ %d,00\n",ara[j],notes[j]);
    return 0;
}
