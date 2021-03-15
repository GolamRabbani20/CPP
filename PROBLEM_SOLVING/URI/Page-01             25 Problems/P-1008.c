#include<stdio.h>
int main()
{
	int NUMBER,Hour;
	float Amount,SALARY;
    printf("Enter No of Employee's and working Hours :\n");
    scanf("%d %d",&NUMBER,&Hour);
    printf("Enter Amount : ");
	scanf("%f",&Amount);
	printf("NUMBER = %d\n",NUMBER);
	SALARY=Hour*Amount;
	printf("SALARY = U$ %.2f\n",SALARY);
	return 0;
}
