#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all program arguments
 * @ac: Number of arguments
 * @av: Array of argument strings
 *
 * Return: Pointer to the new string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	char *result;
	int i;
	size_t j, len = 1, pos = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}

	result = malloc(len);
	if (result == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			result[pos++] = av[i][j];
		result[pos++] = '\n';
	}
	result[pos] = '\0';

	return (result);
}
