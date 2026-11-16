#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a two-dimensional integer grid
 * @grid: Grid to free
 * @height: Number of rows
 */
void free_grid(int **grid, int height)
{
	int row;

	if (grid == NULL)
		return;

	for (row = 0; row < height; row++)
		free(grid[row]);

	free(grid);
}
