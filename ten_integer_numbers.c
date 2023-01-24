#include<stdio.h>
int main()
{
    int num[10],i;
    printf("enter the 10 integer numbers\n");
    for (i=0; i<10; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("your array is as follows\n");
    for (i=0; i<10; i++)
    {
        printf("%d\n", num[i]);
    }
    return 0;
}