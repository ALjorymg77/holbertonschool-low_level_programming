#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: String whose length is counted.
 *
 * Return: Number of characters before the null terminator.
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
		length++;

	return (length);
}
