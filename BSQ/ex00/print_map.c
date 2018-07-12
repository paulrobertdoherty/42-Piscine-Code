/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 19:16:57 by pdoherty          #+#    #+#             */
/*   Updated: 2018/07/11 23:07:32 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	is_in_square(int i, int j, t_square *square)
{
	return (i >= square->x && i < square->x + square->size
			&& j >= square->y && j < square->y + square->size);
}

int	print_map(char **grid, t_square *square, char *chars)
{
	int i;
	int j;

	if (square == NULL)
	{
		free(square);
		return (0);
	}
	i = 0;
	while (grid[i])
	{
		j = 0;
		while (grid[i][j])
		{
			if (is_in_square(i, j, square))
				write(1, &chars[2], 1);
			else
				write(1, &grid[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	free(square);
	return (1);
}
