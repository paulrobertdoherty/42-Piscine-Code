/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 12:12:34 by pdoherty          #+#    #+#             */
/*   Updated: 2018/07/11 22:25:10 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		power(int num, int p)
{
	if (p == 0)
		return (1);
	if (p == 1)
		return (num);
	return (num * power(10, p - 1));
}

t_chars	*get_list(int in)
{
	t_chars	*tr;
	t_chars *chars;
	char	buffer;

	chars = NULL;
	while (read(in, &buffer, 1))
	{
		if (buffer == '\n')
			break ;
		tr = get_char(&chars, buffer);
	}
	return (tr);
}

char	**list_to_line(char **grid, t_chars *char_list)
{
	t_chars	*temp;
	int		x;

	temp = char_list;
	x = 0;
	while (temp)
	{
		grid[0][x] = temp->c;
		temp = temp->next;
		x++;
	}
	free_line(char_list);
	return (grid);
}
