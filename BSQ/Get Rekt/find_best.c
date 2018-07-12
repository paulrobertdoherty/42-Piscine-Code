#include "bsq.h"

void	add_square(t_squares *squares, t_square *square)
{
	t_squares *ta;

	ta = (t_squares)malloc(sizeof(t_squares));
	ta->value = square;
	ta->next = NULL;
	squares->next = ta;
}

/**
 *	Have increment for size of side of square, and then find if that increment works.
 *  */
t_square	get_square(char **grid, int i, int j, char *c)
{
	int length;
	int width;

	length = 0;
	width = 0;
	while (grid[i])
	{
		while (grid[j])
		{
			
			width++;
			j++;
		}
		length++;
		i++;
	}
}
