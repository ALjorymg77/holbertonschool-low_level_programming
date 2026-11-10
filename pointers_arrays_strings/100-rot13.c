#include "main.h"

/**
 * rot13 - Encodes a string in place using ROT13.
 * @s: String to encode.
 *
 * Return: Pointer to the original string.
 */
char *rot13(char *s)
{
const char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
       "abcdefghijklmnopqrstuvwxyz";
const char rotated[] = "NOPQRSTUVWXYZABCDEFGHIJKLM"
       "nopqrstuvwxyzabcdefghijklm";
char *current;
int i;

for (current = s; *current != '\0'; current++)
{
for (i = 0; letters[i] != '\0'; i++)
{
if (*current == letters[i])
{
*current = rotated[i];
break;
}
}
}
return (s);
}
