#include<stdio.h>
#include <string.h>

int main()
{
    struct student
    {
        char name[100];
        int rollno;
        char branch[100];
        int age;
    };
    struct student s1;
    struct student *p;
    p=&s1;
    printf("enter the name, roll no, branch and age of studend\n");
    // scanf("%s",&(*p).name);
    gets(p->name);
    
    scanf("%d",&(*p).rollno);
    // scanf("%s",&(*p).branch);
    gets(p->branch);

    scanf("%d",&(*p).age);
    printf("name\t rollno\t branch\t age\n");
    printf("%s\t %d\t %s\t %d\n", (*p).name, (*p).rollno, (*p).branch, (*p).age);

    return 0;
}