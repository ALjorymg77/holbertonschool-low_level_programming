#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max
 * @min: First value in the array
 * @max: Last value in the array
 *
 * Return: Pointer to the array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int *array;
	size_t count, i;

	if (min > max)
		return (NULL);

	count = (size_t)((unsigned int)max - (unsigned int)min);
	if (count == (size_t)-1)
		return (NULL);
	count++;
	if (count > (size_t)-1 / sizeof(*array))
		return (NULL);

	array = malloc(count * sizeof(*array));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
	{
		array[i] = min;
		if (min < max)
			min++;
	}

	return (array);
}
