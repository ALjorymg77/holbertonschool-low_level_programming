#include "main.h"
#include <stddef.h>

/**
 * _strchr - Finds the first occurrence of a character in a string.
 * @s: String to search.
 * @c: Character to find.
 *
 * Return: Pointer to the matching character, or NULL if absent.
 */
char *_strchr(char *s, char c)
{
while (*s != c)
{
if (*s == '\0')
return (NULL);
s++;
}
return (s);
}
