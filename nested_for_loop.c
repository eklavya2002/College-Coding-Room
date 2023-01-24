#include <stdio.h>
int main ()
{
    int i, J;
    printf("your table is as following\n");
    for(i=1; i<=10; i++)
    {
        for(J=1; J<=10; J++)
        {
            printf("%d\t", i*J);
        }
        printf("\n");
    }
    return 0;
}