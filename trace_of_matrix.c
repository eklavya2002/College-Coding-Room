#include<stdio.h>
int main()
{
    int A[5][5], i, j, r, c, trace=0;
    printf("enter the number of raw and coloum number in matrix\n");
    scanf("%d%d", &r, &c);
    if(r==c)
    {
        printf("enter the %d element in matrix A\n", r*c);
        for(i=1; i<=r; i++)
        {
            for(j=1; j<=c; j++);
            {
                scanf("%d", &A[i][j]);
                printf("your matrix is as follow\n");
            }
        }
        
        for(i=1; i<=0; i++)
        {
            for(j=1; j<=0; j++)
           {
             printf ("%d\t", A[i][j]);
           }
           printf("\n");

        }
        
        {
            for(i=1; i<=r; i++)
            {
                trace = trace+A[i][j];
                printf("the trace of matrix is %d", trace); 
            }
        }
        
    }
    else
    {
        printf("please enter proper square matrix");
    }
    return 0;
    
}