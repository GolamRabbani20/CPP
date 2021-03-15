#include<stdio.h>
int main()
{
	float a,b,c,d,R1,R2;
	scanf("%f %f %f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>=0 && a!=0){
		R1=(-b+sqrt(d))/(2*a);
		R2=(-b-sqrt(d))/(2*a);
		printf("R1 = %.5f\nR2 = %.5f\n",R1,R2);

	}
	else{
		printf("Impossivel calcular\n");
	}
	return 0;
}
