#include <stdio.h>
int main ()
{
    int i=1;
    while(i>0 && i < 10)
    {
        printf("%2d", i);
        i++;
    }
    return 0;
}