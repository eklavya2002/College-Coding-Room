#include<stdio.h>
#include<math.h>
int main ()
{
    float volume, PI, area, slant_height, r, h, l;
    PI = 3.14;
    printf("enter the value for r: ");
    scanf("%f", &r);
    printf("enter the value for h: ");
    scanf("%f", &h);
    slant_height = sqrt((r*r)+(h*h));
    printf("slant height of the given cone is %f\n", slant_height);
    return 0;
} 