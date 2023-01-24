#include<stdio.h>
int main()
{
    int P, R, T, I;
    printf("enter the value of P, R & T\n");
    scanf("%d%d%d", &P, &R, &T);
    simple(P, R, T);
}
simple(int a, int b, int c)
{
    int I;
    I=(a*b*c)/100;
    printf("the simple interest is %d", I);
}