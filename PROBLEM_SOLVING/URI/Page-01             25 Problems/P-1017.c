#include<stdio.h>
int main()
{
    int time,speed;
    float fuel_spent;
    scanf("%d %d",&time,&speed);
    fuel_spent=speed/12.0*time;
    printf("%.3f\n",fuel_spent);
    return 0;
}
