#include "main.h"

/**
 * _isdigit - Checks whether a character is a digit
 * @c: Character to check
 *
 * Return: 1 if a digit, otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
