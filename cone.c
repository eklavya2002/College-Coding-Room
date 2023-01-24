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
    printf("enter the value for l: ");
    scanf("%f", &l);
    volume = (PI*r*r*h)/3;
    area = PI*r*(l+r);
    slant_height = sqrt((r*r)+(h*h));
    printf("volume of the given cone is %f\n", volume);
    printf("area of the given cone is %f\n", area);
    printf("slant height of the given cone is %f\n", slant_height);
    return 0;
} 