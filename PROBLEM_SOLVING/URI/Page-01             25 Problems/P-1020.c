#include<stdio.h>
int main()
{
  int n,day,month,year;
  scanf("%d",&n);
  year=n/365;
  n=n%365;
  month=n/30;
  day=n%30;
  printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",year,month,day);
  return 0;
}
