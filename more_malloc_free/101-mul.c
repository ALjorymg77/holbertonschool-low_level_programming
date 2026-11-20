#include "main.h"
#include <stdlib.h>

/**
 * print_error - Prints an error message and exits with status 98
 */
static void print_error(void)
{
	char *message = "Error\n";
	unsigned int i;

	for (i = 0; message[i] != '\0'; i++)
		_putchar(message[i]);
	exit(98);
}

/**
 * number_length - Validates a number and counts its digits
 * @s: String containing the number
 *
 * Return: Number of digits
 */
static size_t number_length(char *s)
{
	size_t length = 0;

	if (s[0] == '\0')
		print_error();
	while (s[length] != '\0')
	{
		if (s[length] < '0' || s[length] > '9')
			print_error();
		length++;
	}
	return (length);
}

/**
 * multiply - Multiplies two numbers stored as strings
 * @a: First number
 * @b: Second number
 * @n: Length of the first number
 * @m: Length of the second number
 *
 * Return: Array containing the digits of the product
 */
static unsigned char *multiply(char *a, char *b, size_t n, size_t m)
{
	unsigned char *digits;
	size_t i, j, total;
	unsigned int carry, sum;

	if (n > (size_t)-1 - m)
		print_error();
	total = n + m;
	digits = malloc(total);
	if (digits == NULL)
		print_error();
	for (i = 0; i < total; i++)
		digits[i] = 0;

	for (i = n; i > 0; i--)
	{
		carry = 0;
		for (j = m; j > 0; j--)
		{
			sum = (a[i - 1] - '0') * (b[j - 1] - '0');
			sum += digits[i + j - 1] + carry;
			digits[i + j - 1] = sum % 10;
			carry = sum / 10;
		}
		digits[i - 1] = carry;
	}
	return (digits);
}

/**
 * main - Multiplies two positive numbers
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	unsigned char *digits;
	size_t n, m, i;

	if (argc != 3)
		print_error();
	n = number_length(argv[1]);
	m = number_length(argv[2]);
	digits = multiply(argv[1], argv[2], n, m);

	i = 0;
	while (i < n + m - 1 && digits[i] == 0)
		i++;
	while (i < n + m)
		_putchar(digits[i++] + '0');
	_putchar('\n');
	free(digits);
	return (0);
}
