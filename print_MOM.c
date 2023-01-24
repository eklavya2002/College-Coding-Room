#include <stdio.h>
int main ()
{
    int i, J;
    printf("your table is as following\n");
    for(i=1; i<=5; i++)
    {
        for(J=1; J<=i; J++)
        {
            printf("MOM\t");
        }
        printf("\n");
    }
    return 0;
}