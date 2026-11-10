#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Finds the first byte in s that appears in accept.
 * @s: String to search.
 * @accept: String containing the bytes to look for.
 *
 * Return: Pointer to the first match, or NULL if none is found.
 */
char *_strpbrk(char *s, char *accept)
{
const char *candidate;

while (*s != '\0')
{
candidate = accept;
while (*candidate != '\0' && *candidate != *s)
candidate++;
if (*candidate != '\0')
return (s);
s++;
}
return (NULL);
}
