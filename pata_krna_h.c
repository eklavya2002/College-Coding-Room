#include<stdio.h>
int main()
{
    int i, num[100], n, large;
    printf("enter the number of numbers\n");
    scanf("%d", &n);
    printf("enter the %d element in array\n", n);
    for (i=0; i<n; i++)
    {
        scanf("%d", &num[i]);
    }
    for (i=0; i<n; i++)
    {
        if (large<num[i])
        large=num[i];
    }
    printf("the largest value is %d large", num[100]);
    return 0;
}