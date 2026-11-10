#include "main.h"

/**
 * cap_string - Capitalizes lowercase letters at the start of words.
 * @str: String to modify.
 *
 * Return: Pointer to the beginning of str.
 */
char *cap_string(char *str)
{
const char separators[] = " \t\n,;.!?\"(){}";
const char *separator;
char *current;
int start_word;

current = str;
start_word = 1;
while (*current != '\0')
{
if (start_word && *current >= 'a' && *current <= 'z')
*current = *current - 'a' + 'A';
separator = separators;
while (*separator != '\0' && *separator != *current)
separator++;
start_word = (*separator != '\0');
current++;
}
return (str);
}
