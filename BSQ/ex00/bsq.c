/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 19:09:19 by pdoherty          #+#    #+#             */
/*   Updated: 2018/07/11 23:22:02 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		read_from_in(int in)
{
	char	**grid;
	char	*cchars;
	int		height;
	int		pm;

	height = 0;
	cchars = (char *)malloc(sizeof(char *) * 3);
	grid = NULL;
	if (!get_cchars(cchars, &height, in))
		return (0);
	if (!(grid = get_first_line(grid, cchars, height, in)))
		return (0);
	if (height > 1 && !(grid = get_grid(grid, cchars, height, in)))
		return (0);
	close(in);
	pm = print_map(grid, get_biggest_square(grid, cchars), cchars);
	free(cchars);
	free_grid(grid);
	return (pm);
}

void	read_stdin(void)
{
	if (!read_from_in(0))
	{
		close(0);
		write(1, "map error\n", 10);
	}
}

int		main(int argc, char **argv)
{
	int in;
	int i;

	if (argc > 1)
	{
		i = 0;
		while (argv[++i])
		{
			in = open(argv[i], O_RDONLY);
			if (in == -1 || !read_from_in(in))
			{
				close(in);
				write(1, "map error\n", 10);
			}
			if (argc > 2 && i < argc - 1)
				write(1, "\n", 1);
		}
	}
	else
		read_stdin();
	return (0);
}
