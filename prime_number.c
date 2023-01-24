#include<stdio.h>
int main ()
{
    int num;
    printf("enter a number:\t");
    scanf("%d", &num);
    if ((num==2)||(num==3))
        printf("prime number");
    else if ((num-1)%6==0)
        printf("prime number");
    else if ((num+1)%6==0)
        printf("prime number");
    else
        printf("Composite numebr");
    return 0;
}