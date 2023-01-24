#include <stdio.h>
int main()
{
  int x, i = x;
  do 
  {
    printf("enter the vale for x\n");
    scanf("%d", &x);
     printf("%d\n", i);
     i++;
  }
  while (i < 10);
return 0;
}
