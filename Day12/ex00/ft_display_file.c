/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 13:19:45 by pdoherty          #+#    #+#             */
/*   Updated: 2018/07/05 13:20:11 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

void	read_file(char *name)
{
	int		file;
	int		i;
	char	buffer[BUFFER_SIZE + 1];

	file = open(name, O_RDONLY);
	while ((i = read(file, buffer, BUFFER_SIZE)))
	{
		buffer[i] = 0;
		ft_putstr(buffer);
	}
	close(file);
}

int		main(int argc, char **argv)
{
	int i;

	if (argc == 2)
	{
		i = 1;
		while (i < argc)
			read_file(argv[i++]);
	}
	else if (argc == 1)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	return (0);
}
