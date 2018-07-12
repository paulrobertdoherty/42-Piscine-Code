/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_squares.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 19:10:10 by pdoherty          #+#    #+#             */
/*   Updated: 2018/07/11 21:35:26 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void		add_square(t_squares *squares, t_square *square)
{
	t_squares *ta;
	t_squares *temp;

	if (square->size == 0)
	{
		free(square);
		return ;
	}
	if (squares->value == NULL)
	{
		squares->value = square;
		return ;
	}
	ta = (t_squares *)malloc(sizeof(t_squares));
	ta->value = square;
	ta->next = NULL;
	temp = squares;
	while (temp->next)
		temp = temp->next;
	temp->next = ta;
}

t_square	*make_square(int x, int y, int size)
{
	t_square *tr;

	tr = (t_square *)malloc(sizeof(t_square));
	tr->x = x;
	tr->y = y;
	tr->size = size;
	return (tr);
}

t_square	*get_square(char **grid, int i, int j, char *c)
{
	int size;
	int si;
	int sj;
	int ni;
	int nj;

	size = 1;
	while (1)
	{
		si = i;
		sj = j;
		ni = i;
		while (ni - si < size)
		{
			nj = j;
			while (nj - sj < size)
			{
				if (grid[ni] == 0 || grid[ni][nj] == 0 || grid[ni][nj] == c[1])
					return (make_square(i, j, size - 1));
				nj++;
			}
			ni++;
		}
		size++;
	}
}
