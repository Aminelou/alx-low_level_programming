#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **amn;
	int x, y;

	amn = malloc(sizeof(int *) * height);

	if (width <= 0 || height <= 0 || amn == 0)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		amn[x] = malloc(sizeof(int) * width);

		if (amn[x] == NULL)
		{
			for (; x >= 0; x--)
				free(amn[x]);

			free(amn);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			amn[x][y] = 0;
	}

	return (amn);
}
