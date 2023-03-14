#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers
 *
 * @width: Width of the array
 * @height: Height of the array
 *
 * Return: NULL on failure
 * NULL if width and height are 0
 */

int **alloc_grid(int width, int height)
{
	int **twodim;
	int heightindex, widthindex;

	if (width <= 0 || height <= 0)
		return (NULL);

	twodim = malloc(sizeof(int *) * height);

	if (twodim == NULL)
		return (NULL);

	for (heightindex = 0; heightindex < height; heightindex++)
	{
		twodim[heightindex] = malloc(sizeof(int) * width);

		if (twodim[heightindex] == NULL)
		{
			for (; heightindex >= 0; heightindex--)
				free (twodim[heightindex]);

			free (twodim);
			return (NULL);
		}
	}

	for (heightindex = 0; heightindex < height; heightindex++)
	{
		for (widthindex = 0; widthindex < width; widthindex++)
			twodim[heightindex][widthindex] = 0;
	}

	return (twodim);
}
