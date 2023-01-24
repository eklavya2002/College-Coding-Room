#include <stdio.h>
int main ()
{
    int year;
    printf("enter year:\t");
    scanf("%d", &year);
if(year%4==0)
    printf("year is a leap year:\n");
else
    printf("not a leap year");
    return 0;
}