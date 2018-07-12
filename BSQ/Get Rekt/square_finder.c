#include "bsq.h"

void	free_obsts(t_obsts *obsts)
{
	t_obsts *temp;

	while (obsts != NULL)
	{
		temp = obsts;
		free(temp->value);
		obsts = obsts->next;
		free(temp);
	}
}

void	free_rects(t_rects *rects)
{
	t_rects *temp;

	while (rects != NULL)
	{
		temp = rects;
		free(temp->value);
		rects = rects->next;
		free(temp);
	}
}

void	free_squares(t_squares *squares)
{
	t_squares *temp;

	while (squares != NULL)
	{
		temp = squares;
		free(temp->value);
		squares = squares->next;
		free(temp);
	}
}

t_square get_square(t_obsts *obsts, int width, int height)
{
	t_obsts		*obst_temp;
	t_rects		*rects;
	t_squares	*squares;
	t_square	*square;

	obst_temp = obsts;
	rects = malloc(sizeof(t_rects));
	rects->value = NULL;
	rects->next = NULL;
	while (obst_temp)
	{
		add_rects(rects->value, obst_temp);
		obst_temp = obst_temp->next;
	}
	free_obsts(obst_temp);
	convert_to_squares(rects, squares);
	free_rects(rects);
	square = find_biggest_square(squares);
	free_squares(squares);
	return (square);
}
