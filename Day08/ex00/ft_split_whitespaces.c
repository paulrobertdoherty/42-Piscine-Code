/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 22:42:25 by pdoherty          #+#    #+#             */
/*   Updated: 2018/06/27 22:49:56 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		num_of_letters(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 32)
			i++;
	}
	return (i);
}

void	add_words(char *str, char **tr)
{
	int in_word;
	int i;
	int j;
	int k;

	in_word = 0;
	i = 0;
	j = -1;
	while (str[i])
	{
		if (str[i] <= 32)
		{
			if (in_word == 0)
			{
				k = 0;
				j++;
				in_word = 1;
			}
			tr[j][k++] = str[i];
		}
		else
			in_word = 0;
		i++;
	}
	tr[j + 1] = 0;
}

char	**ft_split_whitespaces(char *str)
{
	char	**tr;
	int		l;

	l = num_of_letters(str);
	if (l == 0)
		return (0);
	tr = malloc(sizeof(char) * l);
	add_words(str, tr);
	return (tr);
}
