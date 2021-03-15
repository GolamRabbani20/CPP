#include<stdio.h>
int main()
{
    char name[100];
    printf("Enter your name(size<100): ");
    gets(name);
    float salary;
    double sell ,TOTAL;
    printf("Enter your basic salary : ");
    scanf("%f",&salary);
    printf("Enter how much amount you have sold this month : ");
    scanf("%lf",&sell);
    TOTAL=salary+(sell*15)/100;
    printf("TOTAL = R$ %.2lf\n",TOTAL);
    return 0;
}
