#include "main.h"

/**
 * print_triangle - Prints a right-aligned triangle
 * @size: Number of rows in the triangle
 */
void print_triangle(int size)
{
	int row, column;

	if (size <= 0)
		_putchar('\n');
	for (row = 0; row < size; row++)
	{
		for (column = 0; column < size - row - 1; column++)
			_putchar(' ');
		for (column = 0; column <= row; column++)
			_putchar('#');
		_putchar('\n');
	}
}
