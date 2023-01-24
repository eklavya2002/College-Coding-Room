#include <stdio.h>
#include <math.h>
int main ()
{
    float v, PI, r, l;
    printf("enter the value for r:");
    scanf("%f", &r);
    printf("l:");
    scanf("%f", &l);
    PI = 3.14;
    v = (PI*r*r*l)/3;
    printf("a %f\n", v);
    return 0;
}