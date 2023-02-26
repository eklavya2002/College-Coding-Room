#include <stdio.h>

void getstring(char *string)
{
    //char *string will point to the base address of the string to be used for user input
    int i = 0; char c;
    do
    {
        c = getchar();
        string[i] = c;
        i++;
    }while(c != '\n');
    string[i-1] = '\0';
}

int main()
{
    char name[30], c;
    // int i = 0;
    // do
    // {
    //     c = getchar();
    //     name[i] = c;
    //     i++;
    // }while(c != '\n');
    // name[i-1] = '\0';
    printf("INPUT YOUR NAME: ");
    getstring(name);
    printf("%s", &name);
    return 0;
}