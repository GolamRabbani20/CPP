#include<stdio.h>
double e=0.01;
double c;
int main()
{
    int w;
    //function used is x^3-2x^2+3
    printf("Chose your option:\t\t\n1.Bisection\t\t\n2.Iteration\t\t\n3.NewtonRaphson\t\t\n");
    scanf("%d",&w);
    switch(w)
    {
    case 1:
    {

        double a,b;
        a=-4;
        b=5;

        printf("The function used is x^3-2x^2+3\n");
        printf("a = %lf\n",a);
        printf("b = %lf\n",b);
        bisection(a,b);
        printf("\n");
        printf("Accurate Root calculated is = %lf\n",c);
        break;

    }

    case 2:
    {
        double a,b;
        a=-4;
        b=5;

        printf("The function used is x^3-2x^2+3\n");
        printf("a = %lf\n",a);
        printf("b = %lf\n",b);
        bisection(a,b);
        printf("\n");
        printf("Accurate Root calculated is = %lf\n",c);
        break;
    }
    case 3:
    {
        double a,b;
        a=-4;
        b=5;

        printf("The function used is x^3-2x^2+3\n");
        printf("a = %lf\n",a);
        printf("b = %lf\n",b);
        bisection(a,b);
        printf("\n");
        printf("Accurate Root calculated is = %lf\n",c);
        break;
    }

    default:
       printf("You hove chosen wrong option !!! Please chose correct option!\n\n");
       break;
    }


    return 0;
}

double func(double x)
{
    return pow(x,3) - 2*pow(x,2) + 4;
}



void bisection(double a,double b)
{
    if(func(a) * func(b) >= 0)
    {
        printf("Incorrect a and b");
        return;
    }

    c = a;

    while ((b-a) >= e)
    {
        c = (a+b)/2;
        if (func(c) == 0.0)
        {
            printf("Root = %lf\n",c);
            break;
        }
        else if (func(c)*func(a) < 0)
        {
            printf("Root = %lf\n",c);
            b = c;
        }
        else
        {
            printf("Root = %lf\n",c);
            a = c;
        }
    }
}
