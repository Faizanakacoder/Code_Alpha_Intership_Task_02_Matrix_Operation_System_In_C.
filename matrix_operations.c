#include <stdio.h>

void addMatrix(int a[10][10], int b[10][10], int r, int c)
{
    int i, j, sum[10][10];

    printf("\nResult of Matrix Addition:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
}

void multiplyMatrix(int a[10][10], int b[10][10], int r1, int c1, int c2)
{
    int i, j, k;
    int product[10][10];

    printf("\nResult of Matrix Multiplication:\n");

    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
        {
            product[i][j] = 0;

            for(k = 0; k < c1; k++)
            {
                product[i][j] += a[i][j] * b[k][j];
            }

            printf("%d\t", product[i][j]);
        }
        printf("\n");
    }
}

void transposeMatrix(int a[10][10], int r, int c)
{
    int i, j;

    printf("\nTranspose Matrix:\n");

    for(i = 0; i < c; i++)
    {
        for(j = 0; j < r; j++)
        {
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }
}

int main()
{
    int a[10][10], b[10][10];
    int r, c, i, j, choice;

    printf("=================================\n");
    printf("      MATRIX OPERATIONS\n");
    printf("=================================\n");

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    printf("\nEnter elements of First Matrix:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of Second Matrix:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("\n1. Matrix Addition");
    printf("\n2. Matrix Multiplication");
    printf("\n3. Matrix Transpose");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            addMatrix(a, b, r, c);
            break;

        case 2:
            multiplyMatrix(a, b, r, c, c);
            break;

        case 3:
            transposeMatrix(a, r, c);
            break;

        default:
            printf("\nInvalid Choice!");
    }

    return 0;
}
