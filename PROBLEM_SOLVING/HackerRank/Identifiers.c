#include<stdio.h>
int main()
{
    char str[100];

    printf("Enter an identifier:");
    int count=0,len=0,k=0,i;
    gets(str);

while (str[k]!='\0'){
         len++;
         k++;
    }

if((str[0]>='a' && str[0]<='z') || (str[0]>='A' && str[0]<='Z' )|| str[0]=='_'){
        count++;
    for(i=1;i<=strlen(str);i++)
        if((str[i]>='a'&& str[i]<='z')||(str[i]>='A' && str[i]<='Z')||(str[i]>='0'&& str[i]<='9')||(str[i]=='_'))
           count++;
}
if(count==len)
  printf("%s is valid identifier\n",str);

else
  printf("%s is not valid identifier\n",str);


return 0;
}
