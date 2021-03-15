#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000],temp[20];
    int i=0,k;
    printf("Enter a string:");
gets(str);
char* token=strtok(str," ");
    while(token!=NULL)
    {
        //printf("%s\n",token);
        temp[i]=token;
        i++;
        token=strtok(NULL," ");
        printf("%s\n",temp);
    }


    //printf("%c",&temp[0]);

return 0;
}
