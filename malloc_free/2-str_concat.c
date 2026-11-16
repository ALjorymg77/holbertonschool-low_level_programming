#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to the result, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	size_t len1 = 0;
	size_t len2 = 0;
	size_t i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	result = malloc((len1 + len2 + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	for (i = 0; i < len2; i++)
		result[len1 + i] = s2[i];
	result[len1 + len2] = '\0';

	return (result);
}