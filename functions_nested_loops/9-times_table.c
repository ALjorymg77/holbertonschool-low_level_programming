#include "main.h"

/**
 * times_table - Prints the multiplication table from 0 to 9
 */
void times_table(void)
{
int row;
int column;
int product;

for (row = 0; row <= 9; row++)
{
_putchar('0');
for (column = 1; column <= 9; column++)
{
product = row * column;
_putchar(',');
_putchar(' ');
if (product < 10)
_putchar(' ');
else
_putchar(product / 10 + '0');
_putchar(product % 10 + '0');
}
_putchar('\n');
}
}
