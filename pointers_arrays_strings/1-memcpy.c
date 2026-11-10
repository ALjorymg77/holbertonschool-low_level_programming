#include "main.h"

/**
 * _memcpy - Copies n bytes from src to dest.
 * @dest: Destination memory area.
 * @src: Source memory area.
 * @n: Number of bytes to copy.
 *
 * Return: The original destination pointer.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int index;

index = 0;
while (index < n)
{
dest[index] = src[index];
index++;
}
return (dest);
}
