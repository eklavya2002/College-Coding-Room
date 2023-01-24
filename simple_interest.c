#include<stdio.h>
int main()
{
    int P, R, T, I;
    printf("enter the value of P, R & T\n");
    scanf("%d %d %d", &P, &R, &T);
    I=simple(P,R,T);
    printf("the simple interest is %d", I);
}
simple (int a, int b, int c)
{
    int cal;
    cal = a*b*c/100;
    return(cal);
}