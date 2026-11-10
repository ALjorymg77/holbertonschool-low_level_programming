#include "main.h"

/**
 * _strspn - Counts the initial bytes of s that are present in accept.
 * @s: String to examine.
 * @accept: String containing the accepted bytes.
 *
 * Return: Length of the initial segment containing only accepted bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int length;
const char *candidate;

length = 0;
while (s[length] != '\0')
{
candidate = accept;
while (*candidate != '\0' && *candidate != s[length])
candidate++;
if (*candidate == '\0')
break;
length++;
}
return (length);
}
