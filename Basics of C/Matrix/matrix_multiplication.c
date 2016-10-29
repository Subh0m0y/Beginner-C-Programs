#include <stdio.h>
#include <stdlib.h>

int i, j, k;
int m, q;
int matrix[500][500];

void matrix_output (int a, int b, int z);
void matrix_multiplication (int a, int b)
{
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            matrix[i + 200][j + 200] = 0;
            for (k = 0; k < b; k++)
            {
                matrix[i+200][j+200] = matrix[i+200][j+200] + matrix[i][k]*matrix[k + 100][j + 100];
            }
        }
    }
    matrix_output(m, q, 200);
}
