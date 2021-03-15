#include<stdio.h>
int main()
{
    float a,b,c,d,e;
    double average,average1;
    scanf("%f %f %f %f",&a,&b,&c,&d);
    average=((a*2)+(b*3)+(c*4)+d)/10;
    printf("Media: %.1lf\n",average);
    if(average>=7.0)
    printf("Aluno aprovado.\n");
    else if (average<5.0)
    printf("Aluno reprovado.\n");
    else
    {
        printf("Aluno em exame.\n");
        scanf("%f",&e);
        printf("Nota do exame: %.1f\n",e);
        average1=(average+e)/2;
        if(average>=5.0)
        printf("Aluno aprovado.\n");
        else
        printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n",average1);
    }
    return 0;
}
