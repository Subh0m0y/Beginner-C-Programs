#include <stdio.h>
#include <stdlib.h>

int i, j, k;
int matrix[500][500];
int m, n;

void matrix_output (int a, int b, int z);
void matrix_addition ( int a, int b, int z)
{
    for ( i = 0; i < a; i++)
    {
        for ( j = 0; j < b; j++)
        {
            matrix[i][j] = matrix[i][j] + matrix[i + z][j + z];
        }
    }
    matrix_output(m, n, 0);
}
