#include<stdio.h>
int main()
{
    char s[100];
    gets(s);
    int i,count1=0,count2=0,count3=0;
    for(i=0;s[i]!='\0';i++){
        if(s[i]=='a' && s[i+1]==' ' ||s[i]=='A' && s[i+1]==' ')
            count1++;
        else if(s[i]=='a' && s[i+1]=='n' && s[i+2]==' '|| s[i]=='A' && s[i+1]=='n' && s[i+2]==' ')
            count2++;

        else if(s[i]=='t' && s[i+1]=='h' && s[i+2]=='e' && s[i+3]==' ' || s[i]=='T' && s[i+1]=='h' && s[i+2]=='e' && s[1+3]==' ')
            count3++;

    }
    printf("A=%d\n",count1);
    printf("An=%d\n",count2);
    printf("The=%d\n",count3);
    return 0;
}
