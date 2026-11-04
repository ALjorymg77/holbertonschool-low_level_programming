#include "main.h"

/**
 * print_diagonal - Draws a diagonal line
 * @n: Number of backslashes to print
 */
void print_diagonal(int n)
{
	int row, space;

	if (n <= 0)
		_putchar('\n');
	for (row = 0; row < n; row++)
	{
		for (space = 0; space < row; space++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
