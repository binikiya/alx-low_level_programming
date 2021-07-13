#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free privious alloc_grid
 * @grid: 2-D grid being freed
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
int i = 0;
free(grid);
while (i < height)
{
free(grid[i]);
i++;
}
}
