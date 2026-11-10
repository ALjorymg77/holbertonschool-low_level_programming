#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sums of both diagonals of a square matrix.
 * @a: Pointer to the first element of the matrix.
 * @size: Number of rows and columns.
 */
void print_diagsums(int *a, int size)
{
int row;
size_t row_start;
long first_sum;
long second_sum;

first_sum = 0;
second_sum = 0;
for (row = 0; row < size; row++)
{
row_start = (size_t)row * size;
first_sum += a[row_start + row];
second_sum += a[row_start + (size - 1 - row)];
}
printf("%ld, %ld\n", first_sum, second_sum);
}
