#include <stdio.h>
int main ()
{
    int i, J;
    printf("your table is as following\n");
    for(i=1; i<=5; i++)
    {
        for(J=1; J<=i; J++)
        {
            printf("%d\t", J);
        }
        printf("\n");
    }
    return 0;
}