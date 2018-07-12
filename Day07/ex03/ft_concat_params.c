/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 21:39:12 by pdoherty          #+#    #+#             */
/*   Updated: 2018/06/28 11:16:08 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		length(char *src)
{
	int i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

void	get_params(char **argv, char *tr, int argc)
{
	int i;
	int j;
	int k;

	i = 1;
	k = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			tr[k++] = argv[i][j];
			j++;
		}
		if (i < argc - 1)
			tr[k++] = '\n';
		i++;
	}
	tr[k] = 0;
}

int		size_of_args(char **argv)
{
	int		tr;
	int		i;

	tr = 1;
	i = 1;
	while (argv[i])
		tr += length(argv[i++]) + 1;
	return (tr);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*tr;

	if (argc > 1)
	{
		tr = malloc(sizeof(char) * size_of_args(argv));
		get_params(argv, tr, argc);
		return (tr);
	}
	tr = malloc(sizeof(char) * 1);
	tr[0] = 0;
	return (tr);
}
