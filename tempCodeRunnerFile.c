#include <stdio.h>
void reverse(char str[],int len)
{
  if(len>=0)
  {
    printf("%c",str[len]);
  }
  else
  return;
    reverse(str,len-1);
      }
  int main()
{
  char s[100];
  int i;
  printf("enter a string:");
  gets(s);
  for(i=0;s[i]!='\0';i++);
  reverse(s,i);
  return 0;


  
}