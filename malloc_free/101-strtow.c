#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts words separated by spaces
 * @str: String to examine
 *
 * Return: Number of words
 */
static size_t count_words(char *str)
{
	size_t i, count = 0;

	for (i = 0; str[i] != '\0'; i++)
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			count++;

	return (count);
}

/**
 * strtow - Splits a string into words
 * @str: String to split
 *
 * Return: Array of words, or NULL on failure
 */
char **strtow(char *str)
{
	char **words;
	size_t count, word, i = 0, j, len;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	count = count_words(str);
	if (count == 0)
		return (NULL);
	words = malloc((count + 1) * sizeof(*words));
	if (words == NULL)
		return (NULL);

	for (word = 0; word < count; word++)
	{
		while (str[i] == ' ')
			i++;
		len = 0;
		while (str[i + len] != '\0' && str[i + len] != ' ')
			len++;
		words[word] = malloc(len + 1);
		if (words[word] == NULL)
		{
			while (word > 0)
				free(words[--word]);
			free(words);
			return (NULL);
		}
		for (j = 0; j < len; j++)
			words[word][j] = str[i + j];
		words[word][j] = '\0';
		i += len;
	}
	words[word] = NULL;
	return (words);
}
