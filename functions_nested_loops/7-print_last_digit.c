#include "main.h"

/**
 * print_last_digit - Prints the last decimal digit of an integer
 * @n: Integer to check
 *
 * Return: The last digit as a nonnegative integer
 */
int print_last_digit(int n)
{
int last_digit;

last_digit = n % 10;
if (last_digit < 0)
last_digit = -last_digit;
_putchar(last_digit + '0');
return (last_digit);
}
