#include<stdio.h>
int main()
{
	float R,A,Pi=3.14159;
	printf("Enter the value of radius : ");
	scanf("%f",&R);
	A=Pi*(R*R);
	printf("A=%.4f\n",A);
	return 0;
}
