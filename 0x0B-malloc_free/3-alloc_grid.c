#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - entry point.
 * @width: colums of the array.
 * @height: rows of the array.
 * Return:  An array of two dimensional.
 */
int **alloc_grid(int width, int height)
{
	int **m;
	int a, x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	m = (int **) malloc(height * sizeof(int *));
	if (m == NULL)
	{
		return (0);
	}
	for (a = 0; a < height; a++)
	{
		m[a] = (int *) malloc(width * sizeof(int));
		if (m[a] == NULL)
		{
			while (a >= 0)
				free(m[a--]);
			free(m);
			return (0);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			m[x][y] = 0;
		}
	}
	return (m);
}

