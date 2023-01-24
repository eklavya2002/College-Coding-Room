#include<stdio.h>
int main()
{
    int A[5][5], i, j, r, c, lsum=0, usum=0;
    printf("enter the order of matrix A\n");
    scanf("%d%d", &r, &c);
    if(r==c)
    {
        printf("enter the %d element in matrix\n", r*c);
        for(i=1; i<=r; i++)
        {
            for(j=1; j<=c; j++)
            {
                scanf("%d", &A[i][j]);
                printf("tour matrix is as follow\n");
            }
        }
        for(i=1; i<=r; i++)
        {
            for(j=1; j<=c; j++)
            {
                printf("%d\t", A[i][j]);
            }
            printf("\n");
        }
        for(i=1; i<=r; i++)
        {
            for(j=1; j<=c; j++)
            {
                if(i>j)
                lsum = lsum + A[i][j];
                if(i<j)
                usum = usum + A[i][j];
            }
            
        }
    }
    printf("your upper sum is as follow %d\n", usum);
    printf("your lower sum is as follow %d\n", lsum);
    
    return 0;
}