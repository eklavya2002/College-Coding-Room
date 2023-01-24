#include<stdio.h>
int main()
{
    simple();
}
simple()
{
    int P, R, T, I;
    printf("enter the value of P, R & T\n");
    scanf("%d%d%d", &P, &R, &T);
    I=(P*R*T)/100;
    printf("the simple interest is %d", I);
}