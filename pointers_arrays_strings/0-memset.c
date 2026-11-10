#include "main.h"

/**
 * _memset - Fills the first n bytes of a memory area.
 * @s: Pointer to the memory area.
 * @b: Byte value to write.
 * @n: Number of bytes to fill.
 *
 * Return: The original pointer s.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int index;

index = 0;
while (index < n)
{
s[index] = b;
index++;
}
return (s);
}
