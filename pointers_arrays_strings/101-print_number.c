#include "main.h"

/**
 * print_number - Prints an integer in decimal.
 * @n: Integer to print.
 */
void print_number(int n)
{
unsigned int value;
unsigned int divisor;

value = (unsigned int)n;
if (n < 0)
{
_putchar('-');
value = 0U - value;
}

divisor = 1;
while (value / divisor >= 10)
divisor *= 10;

while (divisor > 0)
{
_putchar('0' + value / divisor);
value %= divisor;
divisor /= 10;
}
}
