#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a<b&&b<c&&a<c)
    printf("%d\n %d\n %d\n",a,b,c);
    else if(b<a&&a<c&&b<c)
    printf("%d\n %d\n %d\n",b,a,c);
    else if(c<b&&a<b&&c<a)
    //printf("%d\n %d\n %d\n",c,a,b);
    //printf("\n");
    //printf("%d\n %d\n %d\n",a,b,c);
    return 0;
}
