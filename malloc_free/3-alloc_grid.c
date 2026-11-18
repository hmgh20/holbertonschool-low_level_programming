#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: A pointer to the 2D array of integers, or NULL on failure.
 *         If width or height is 0 or negative, returns NULL.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate memory for the rows (array of pointers) */
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		/* Allocate memory for each row (columns) */
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			/* Free previously allocated rows on failure to avoid memory leaks */
			for (k = 0; k < i; k++)
				free(grid[k]);
			free(grid);
			return (NULL);
		}

		/* Initialize each element to 0 */
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
