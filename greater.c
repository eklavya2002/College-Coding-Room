//Eklavya kumar 22609
//three number cheak one is greater

#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the three number:  ");
    scanf("%d%d%d", &a, &b, &c);
    
    if(a>b && a>c)
    {
       printf("the greater value is %d", a);
    }

    if(a>c && b>a)
    {
       printf("the greater value is %d", b);
    }   
    if(c>b && c>a)
    {
       printf("the greater value is %d", c);
    }
        return 0;
 }