//Eklavya kumar 22609
// cheak your marks 
#include <stdio.h>

int main()
{
  int marks;
  printf(" dear student Enter yours marks:  ");
  scanf("%d", &marks);
  printf("dear student You have entered %d as your marks\n", marks);

  if(marks>=450 && marks!=500)
  
    printf("you are 450 to 500 marks pass in top class");
  else
    if(marks>=300 && marks!=450)

    printf("dear student you are 300 to 449 marks pass in first class");
  
    else
    if(marks>=225 && marks!=300)
  
    printf("dear student you are 225 to 299 marks pass in second class");

  else
  if(marks>150 && marks!=225) 

  printf("dear student you are 150 to 224 marks pass in third class");
    else
    printf(" dear student you are fail");
  
    
    return 0;
    
}