#include <stdio.h>
int main ()
{
    char name [10], character, line[3];
    int i=0;
    printf("enter your string here \n");
    do
    {
        character = getchar();
        line[i] = character;
        i++; 
    }
    while (character ='\n');
    i=i-1;
    line[i]='\0';
    printf("your line is a follows\n");
    printf("%s", line[i]);    
    
}