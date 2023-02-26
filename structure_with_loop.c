#include<stdio.h>
int main()
{
    struct student
    {
        char name[10];
        int age;
        float marks;
    };
    struct student std[10];
    int i;
    printf("enter the details of student\n");
    for(i=0; i<10; i++)
    {
        
    printf("enter the details of %d student\n",i+1);
    scanf("%s",&std[i].name);
    scanf("%d",&std[i].age);
    scanf("%f",&std[i].marks);
    printf("name\t age\t marks\n");
    printf("%s\t %d\t %f\n", std[i].name, std[i].age, std[i].marks);

    }
    return 0;
    

}