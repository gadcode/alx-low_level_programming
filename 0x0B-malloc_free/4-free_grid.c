#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously created
 * at alloc_grid function
 * @grid: multi-dimensional array of integers
 * @height: height of the grid
 *
 * Author: @gadcode
 * Date: 04/10/2023
 *
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
