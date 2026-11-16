#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string
 * @str: String to copy
 *
 * Return: Pointer to the copy, or NULL on failure
 */
char *_strdup(char *str)
{
	char *copy;
	size_t len = 0;
	size_t i;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	copy = malloc((len + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		copy[i] = str[i];

	return (copy);
}
