#include <stdio.h>
#include "matrix_addition.c"
#include "matrix_multiplication.c"

int m, n;
int p, q;
int i, j, k;
int matrix[500][500];
void matrix_input (int a, int b, int z);
void matrix_output (int a, int b, int z);
void matrix_transpose (int a, int b);

int main(void)
{
    int option;
    printf("1 - Transpose of a Matrix\n");
    printf("2 - Addition of two Matrices\n");
    printf("3 - Multiplication\n");
    scanf("%d", &option);

    switch (option)
    {
        case 1:     do
                    {
                        printf("Enter the order of the Matrix : ");
                        scanf("%d%d", &m, &n);

                    } while (m < 0 || n < 0 );

                    printf("Enter the elements of the matrix\n");
                    matrix_input (m, n, 0);

                    printf("Transpose of the Matrix is\n");
                    matrix_transpose (m, n);
                    break;

        case 2:     do
                    {
                        printf("Enter the order of the first matrix  : ");
                        scanf("%d%d", &m, &n);

                        printf("Enter the order of the second matrix : ");
                        scanf("%d%d", &p, &q);

                    } while (m < 0 || n < 0 || p < 0 || q < 0);

                    if (m != p && n != q)
                    {
                        printf("Matrix Addition not possible\n");
                        break;
                        return 1;
                    }
                    printf("Enter the elements of Matrix A\n");
                    matrix_input (m, n, 0);
                    printf("Enter the elements of Matrix B\n");
                    matrix_input (p, q, 100);
                    printf("\nMatrix A + Matrix B :\n");
                    matrix_addition (m, n, 100);
                    break;

        case 3:
                    printf("Enter the order of first matrix  :");
                    scanf("%d%d", &m, &n);
                    printf("Enter the order of second matrix :");
                    scanf("%d%d", &p, &q);
                    if (n != p)
                    {
                        printf("Matrix multiplication not possible.\n");
                        break;
                    }
                    printf("Enter the elements of Matrix A\n");
                    matrix_input(m, n, 0);
                    printf("Enter the elements of Matrix B\n");
                    matrix_input(p, q, 100);
                    printf("Matrix A * Matrix B :\n");
                    matrix_multiplication(m, q);
                    break;

        default:    printf("Enter the correct option");

    }
    return 0;
}


void matrix_input ( int a, int b, int z)
{
    for ( i = 0 + z; i < (a + z); i++)
    {
        for( j = 0 + z; j < (b + z); j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void matrix_output (int a, int b, int z)
{
    for ( i = 0 + z; i < (a + z); i++)
    {
        for ( j = 0 + z; j < (b + z); j++)
        {
            printf("%5d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void matrix_transpose( int a, int b)
{
    for (i = 0; i < b; i++)
    {
        for (j = 0; j < a; j++)
        {
            printf(" %5d ", matrix[j][i]);
        }
        printf("\n");
    }
}
