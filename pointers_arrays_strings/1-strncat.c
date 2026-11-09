#include "main.h"

/**
 * _strncat - Appends up to n bytes from src to dest.
 * @dest: Destination buffer with enough space for the result.
 * @src: Bytes to append.
 * @n: Maximum number of bytes to copy.
 *
 * Return: Pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *end;

	end = dest;
	while (*end != '\0')
		end++;
	while (n > 0 && *src != '\0')
	{
		*end = *src;
		end++;
		src++;
		n--;
	}
	*end = '\0';
	return (dest);
}
