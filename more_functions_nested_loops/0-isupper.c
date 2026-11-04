#include "main.h"

/**
 * _isupper - Checks whether a character is uppercase
 * @c: Character to check
 *
 * Return: 1 if uppercase, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
