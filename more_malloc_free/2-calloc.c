#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and sets it to zero
 * @nmemb: Number of elements
 * @size: Size of each element in bytes
 *
 * Return: Pointer to allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned char *memory;
	size_t total, i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if ((size_t)nmemb > (size_t)-1 / size)
		return (NULL);

	total = (size_t)nmemb * size;
	memory = malloc(total);
	if (memory == NULL)
		return (NULL);

	for (i = 0; i < total; i++)
		memory[i] = 0;

	return (memory);
}
