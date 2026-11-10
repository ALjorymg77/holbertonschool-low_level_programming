#include "main.h"

/**
 * rot13 - Encodes a string in place using ROT13.
 * @s: String to encode.
 *
 * Return: Pointer to the original string.
 */
char *rot13(char *s)
{
char from[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char to[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
char *current;
int i;

for (current = s; *current != '\0'; current++)
{
for (i = 0; from[i] != '\0'; i++)
{
if (*current == from[i])
{
*current = to[i];
break;
}
}
}
return (s);
}
