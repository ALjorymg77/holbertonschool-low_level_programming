#include "main.h"

/**
 * print_line - Draws a line using underscores
 * @n: Number of underscores to print
 */
void print_line(int n)
{
	int count;

	for (count = 0; count < n; count++)
		_putchar('_');
	_putchar('\n');
}
