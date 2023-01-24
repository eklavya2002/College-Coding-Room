//Wap to add two matrix
//Eklavya kumara
// roll no- 22609
#include <stdio.h>

int main()
{
    int rows, cols, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols];

    printf("Enter elements for matrix 1:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
        {
            printf("Enter element number [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }

    printf("Enter elements for matrix 2:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
        {
            printf("Enter element number [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }

    printf("Enter elements for matrix 1:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            sum[i][j] = matrix1[i][j] + matrix2[i][j];

    printf("Matrix1: \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("Matrix2: \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    printf("The sum of matrices is: \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}