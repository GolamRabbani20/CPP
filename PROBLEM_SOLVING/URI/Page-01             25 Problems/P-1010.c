#include<stdio.h>
int main()
{
    int code_1,code_2,amount_1,amount_2;
    float prize_1,prize_2,Total;
    scanf("%d %d %f",&code_1,&amount_1,&prize_1);
    scanf("%d %d %f",&code_2,&amount_2,&prize_2);
    Total=(amount_1*prize_1)+(amount_2*prize_2);
    printf("VALOR A PAGAR: R$ %.2f\n",Total);
    return 0;
}
