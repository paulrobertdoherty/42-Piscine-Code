#include "bsq.h"

t_rect	make_rect(int x, int y, int width, int height)
{
	t_rect *tr;

	tr = (t_rect)malloc(sizeof(t_rect));
	tr->x = max(0, x);
	tr->y = max(0, y);
	tr->width = max(0, width);
	tr->height = max(0, height);
	return (tr);
}

void	look_for_left(t_obsts *obsts, t_rect *rect)
{
	t_obst *temp;

	temp = obsts;
	while (temp)
	{
		if (temp->previous == NULL)
			return (make_rect(0, 0,
					temp->value->x, temp->value->y
		if (temp->value->x < rect->x
			&& temp->value->y 
		temp = temp->previous;
	}
}

void	look_for_top(t_obsts *obsts, t_rect *rect)
{
	
}

void	add_rects(t_obsts *obsts, t_rects *rects)
{
	t_rects *temp;

	temp = obsts;
	while (temp)
	{
		look_for_tleft(obsts, rects);
	}
}
