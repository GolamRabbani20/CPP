#include<stdio.h>
int main()
{
    double n;
    int r;
    scanf("%lf",&n);
    r=n*100;
    int i,j,a[12],b[12];
    double s[12]={100,50,20,10,5,2,1,0.50,0.25,0.10,0.05,0.01};
    for(i=0;i<12;i++)
    a[i]=s[i]*100;
    for(i=0;i<12;i++)
    {
        b[i]=r/a[i];r=r%a[i];
    }
        printf("NOTAS:\n");
        printf("%d nota(s) de R$ %.2lf\n",b[0],s[0]);
        printf("%d nota(s) de R$ %.2lf\n",b[1],s[1]);
        printf("%d nota(s) de R$ %.2lf\n",b[2],s[2]);
        printf("%d nota(s) de R$ %.2lf\n",b[3],s[3]);
        printf("%d nota(s) de R$ %.2lf\n",b[4],s[4]);
        printf("%d nota(s) de R$ %.2lf\n",b[5],s[5]);
        printf("MOEDAS:\n");
        printf("%d moeda(s) de R$ %.2lf\n",b[6],s[6]);
        printf("%d moeda(s) de R$ %.2lf\n",b[7],s[7]);
        printf("%d moeda(s) de R$ %.2lf\n",b[8],s[8]);
        printf("%d moeda(s) de R$ %.2lf\n",b[9],s[9]);
        printf("%d moeda(s) de R$ %.2lf\n",b[10],s[10]);
        printf("%d moeda(s) de R$ %.2lf\n",b[11],s[11]);
        return 0;
}
