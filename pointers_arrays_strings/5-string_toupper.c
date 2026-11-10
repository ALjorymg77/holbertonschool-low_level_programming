#include "main.h"

/**
 * string_toupper - Converts lowercase letters to uppercase in place.
 * @str: String to modify.
 *
 * Return: Pointer to the beginning of str.
 */
char *string_toupper(char *str)
{
char *current;

current = str;
while (*current != '\0')
{
if (*current >= 'a' && *current <= 'z')
*current = *current - 'a' + 'A';
current++;
}
return (str);
}
