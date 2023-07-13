#include "main.h"
#include <stdlib.h>
/**
 * free_grid - freeing a 2 dimensional grid
 * void free_grid(int **grid, int height) - function definition for freeing a
 * a 2 dimensional grid
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 * Return: Nothing.
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
