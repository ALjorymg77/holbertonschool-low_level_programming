#include "main.h"

/**
 * _islower - Checks whether a character is lowercase
 * @c: Character code to check
 *
 * Return: 1 if lowercase, otherwise 0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
return (0);
}
