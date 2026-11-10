#include "main.h"

/**
 * leet - Encodes a string in 1337 in place.
 * @str: String to encode.
 *
 * Return: Pointer to the beginning of str.
 */
char *leet(char *str)
{
const char letters[] = "aAeEoOtTlL";
const char digits[] = "4433007711";
char *current;
int index;

current = str;
while (*current != '\0')
{
index = 0;
while (letters[index] != '\0')
{
if (*current == letters[index])
{
*current = digits[index];
break;
}
index++;
}
current++;
}
return (str);
}
