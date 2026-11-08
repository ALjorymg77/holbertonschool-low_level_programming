#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts the first number in a string to an integer.
 * @s: String to convert.
 *
 * Return: Converted integer, or 0 if no digits are found.
 */
int _atoi(char *s)
{
	int sign;
	int value;
	int digit;
	int limit;

	sign = 1;
	value = 0;
	while (*s != '\0' && (*s < '0' || *s > '9'))
	{
		if (*s == '-')
			sign = -sign;
		s++;
	}
	limit = sign == 1 ? -INT_MAX : INT_MIN;
	while (*s >= '0' && *s <= '9')
	{
		digit = *s - '0';
		if (value < limit / 10 ||
			(value == limit / 10 && digit > -(limit % 10)))
			return (sign == 1 ? INT_MAX : INT_MIN);
		value = value * 10 - digit;
		s++;
	}
	if (sign == 1)
		return (-value);
	return (value);
}
