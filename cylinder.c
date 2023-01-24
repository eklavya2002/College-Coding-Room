// w a p for the cylinder
//eklavya22609
#include <stdio.h>
#include <math.h>
int main()
{
   float r, h, PI, curved, total_area, volume;
   PI = 3.14;
   printf("Enter the value for r:  ");
   scanf("%f", &r);
   printf("Enter the value for h:  ");
   scanf("%f", &h);
   curved = 2*PI*r*h;
   total_area = 2*PI*(r+h);
   volume = PI*r*r*h;

   printf("Curved surface area %f\n", curved);
   printf("Total surface area %f\n", total_area);
   printf("Volume of the cylinder %f\n", volume);

    return 0;
}