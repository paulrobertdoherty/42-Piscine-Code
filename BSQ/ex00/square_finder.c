/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square_finder.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 19:17:38 by pdoherty          #+#    #+#             */
/*   Updated: 2018/07/11 21:47:53 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void		get_all_squares(char **grid, t_squares *squares, char *c)
{
	int i;
	int j;

	i = 0;
	while (grid[i])
	{
		j = 0;
		while (grid[i][j])
		{
			add_square(squares, get_square(grid, i, j, c));
			j++;
		}
		i++;
	}
}

t_square	*copy(t_square *square)
{
	t_square *tr;

	tr = (t_square *)malloc(sizeof(t_square));
	tr->size = square->size;
	tr->x = square->x;
	tr->y = square->y;
	return (tr);
}

t_square	*find_best(t_squares *squares)
{
	t_square	*best;
	t_squares	*temp;

	if (squares->value == NULL)
		return (squares->value);
	best = squares->value;
	temp = squares->next;
	while (temp)
	{
		if (temp->value->size > best->size)
			best = temp->value;
		temp = temp->next;
	}
	best = copy(best);
	free_square_list(squares, best);
	return (best);
}

t_square	*get_biggest_square(char **grid, char *chars)
{
	t_squares *squares;

	squares = (t_squares *)malloc(sizeof(t_squares));
	squares->value = NULL;
	squares->next = NULL;
	get_all_squares(grid, squares, chars);
	return (find_best(squares));
}
