#include<stdio.h>
#include<conio.h>
void xecursive(int);
int main()
{
    xecursive(2);
    return 0;
}

void xecursive(int n){
    if (n==0)
        return;
    print("%d",n);
    return xecursive(n-1);
    print("Call End\n");

}
