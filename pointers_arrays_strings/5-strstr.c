#include "main.h"
#include <stddef.h>

/**
 * _strstr - Finds the first occurrence of a substring.
 * @haystack: String to search.
 * @needle: Substring to find.
 *
 * Return: Pointer to the first match, or NULL if none is found.
 */
char *_strstr(char *haystack, char *needle)
{
const char *text;
const char *part;

if (*needle == '\0')
return (haystack);
while (*haystack != '\0')
{
text = haystack;
part = needle;
while (*part != '\0' && *text == *part)
{
text++;
part++;
}
if (*part == '\0')
return (haystack);
haystack++;
}
return (NULL);
}
