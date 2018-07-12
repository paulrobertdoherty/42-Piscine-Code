/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 19:32:02 by pdoherty          #+#    #+#             */
/*   Updated: 2018/07/11 19:32:39 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	free_square_list(t_squares *squares, t_square *best)
{
	t_squares *temp;

	while (squares)
	{
		free(squares->value);
		temp = squares;
		squares = squares->next;
		free(temp);
	}
}

void	free_grid(char **grid)
{
	int i;

	i = 0;
	while (grid[i])
		free(grid[i++]);
	free(grid);
}

void	free_line(t_chars *first_line)
{
	t_chars *temp;

	while (first_line)
	{
		temp = first_line;
		first_line = first_line->next;
		free(first_line);
	}
}
