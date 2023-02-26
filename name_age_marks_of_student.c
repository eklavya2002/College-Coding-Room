#include<stdio.h>
int main()
{ 
    struct student
    {
        char name[10];
        int age;
        float marks;

    };
    struct student s1;
    printf("enter the name, age and obtained marks of student\n");
    scanf("%s",& s1.name);
    scanf("%d",&s1.age);
    scanf("%f",&s1.marks);
    printf("student details is as follows\n");
    printf("name\t age\t marks\n");
    printf("%s\t %d\t %f", s1.name, s1.age, s1.marks);
    return 0;
}