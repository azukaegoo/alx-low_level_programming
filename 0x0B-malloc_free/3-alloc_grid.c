#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returning a pointer to a 2 dimensional arrays of integers
 * int **alloc_grid(int width, int height) - returning a pointer to a 2
 * dimensional arrays of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: Nothing.
*/
int **alloc_grid(int width, int height)
{
	int **grid, i, j;
	int len = width * height;

	if (len <= 0)
	return (NULL);

	grid = (int **)malloc(sizeof(int *) * height);
	if (grid == NULL)
	return (NULL);

	for (i = 0; i < height; i++)
	{
	grid[i] = (int *)malloc(sizeof(int) * width);
	if (grid[i] == NULL)
	{
	for (i--; i >= 0; i--)
	{
		free(grid[i]);
		free(grid);
	}
	return (NULL);
	}
	}
	for (i = 0; i < height; i++)
	for (j = 0; j < width; j++)
	{
	grid[i][j] = 0;
	}
	return (grid);
}
