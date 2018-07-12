/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_from_in.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 19:32:51 by pdoherty          #+#    #+#             */
/*   Updated: 2018/07/11 22:25:07 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_chars	*get_char(t_chars **first_chars, char c)
{
	t_chars *tr;
	t_chars *temp;

	tr = (t_chars *)malloc(sizeof(t_chars));
	tr->c = c;
	tr->next = NULL;
	tr->previous = NULL;
	if (*first_chars)
	{
		temp = *first_chars;
		while (temp->next)
			temp = temp->next;
		temp->next = tr;
		tr->previous = temp;
	}
	else
		*first_chars = tr;
	return (tr);
}

int		get_cchars(char *cchars, int *height, int in)
{
	char	buffer;
	t_chars	*temp;
	int		i;

	temp = get_list(in);
	i = 2;
	while (temp)
	{
		if (i >= 0)
			cchars[i] = temp->c;
		else if (temp->c >= '0' && temp->c <= '9')
			(*height) = ((temp->c - '0') * power(10, -i - 1)) + (*height);
		else
			return (0);
		temp = temp->previous;
		i--;
	}
	return (i < 0 && (*height) > 0);
}

char	**first_to_grid(char **grid, t_chars *first_line, int i, int height)
{
	int		j;
	int		x;

	j = 0;
	grid = (char **)malloc(sizeof(char *) * (height + 1));
	grid[height] = 0;
	while (j < height)
	{
		x = 0;
		grid[j] = (char *)malloc(sizeof(char) * (i + 1));
		grid[j][i] = 127;
		if (j == 0)
			grid = list_to_line(grid, first_line);
		else
		{
			while (x < i)
			{
				grid[j][x] = 0;
				x++;
			}
		}
		j++;
	}
	return (grid);
}

char	**get_first_line(char **grid, char *cchars, int height, int in)
{
	char	buffer;
	t_chars	*first_line;
	int		i;
	int		line;

	first_line = NULL;
	line = 0;
	i = 0;
	while (read(in, &buffer, 1))
	{
		if (buffer == cchars[0] || buffer == cchars[1])
		{
			get_char(&first_line, buffer);
			i++;
		}
		else if (buffer == '\n')
			return (first_to_grid(grid, first_line, i, height));
		else
			return (NULL);
	}
	if (height == 1)
		return (grid);
	return (NULL);
}

char	**get_grid(char **grid, char *cchars, int height, int in)
{
	char	buffer;
	int		line;
	int		i;

	i = 0;
	line = 1;
	while (read(in, &buffer, 1))
	{
		if (grid[line][i] == 0 && (buffer == cchars[0] || buffer == cchars[1]))
			grid[line][i++] = buffer;
		else if (buffer == '\n')
		{
			if (grid[line][i] != 127)
				return (NULL);
			grid[line][i] = 0;
			if (line == height - 1)
				return (grid);
			i = 0;
			line++;
		}
		else
			return (NULL);
	}
	return (NULL);
}
