#include "bsq.h"

int		max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

int		equals(t_square *one, t_square *two)
{
	int tr;

	tr = one->size == two->size && one->x == two->x &&
		one->y == two->y;
	return (tr);
}

void	liberate(t_squares *squares, t_square *best)
{
	t_squares *temp;

	while (squares)
	{
		temp = squares;
		if (!equals(squares->value, best))
			free(squares->value);
		squares = squares->next;
		free(temp);
	}
}