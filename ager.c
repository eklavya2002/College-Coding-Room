#include <stdio.h>
int main()
{
    int age;
    printf("Enter yours age:  ");
    scanf("%d", &age);
    printf("you have entered %d as your age\n", age);

    if(age>=18)
    {
        printf(" you can vote! for mature");
    }

    return 0;
    
    }