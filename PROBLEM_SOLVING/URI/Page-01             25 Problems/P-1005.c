#include<stdio.h>
int main()
{
	double A,B,MEDIA;
	printf("Enter two values :\n");
	scanf("%lf %lf",&A,&B);
	MEDIA=((A*3.5)+(B*7.5))/(3.5+7.5);
	printf("MEDIA = %.5lf\n",MEDIA);
	return 0;
}


