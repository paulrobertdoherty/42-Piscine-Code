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
			return (i);
		i++;
	}
	return (i);
}

char	*get_word(char *str, char *line, int i)
{
	int j;

	j = 0;
	while (str[i] > 32)
		line[j++] = str[i++];
	return (line);
}

int		num_of_words(char *str)
{
	int i;
	int j;
	int is_word;

	i = 0;
	j = 0;
	is_word = 0;
	while (str[i])
	{
		if (str[i] > 32)
		{
			if (is_word == 0)
				j++;
			is_word = 1;
		}
		else
		{
			is_word = 0;
		}
		i++;
	}
	return (j);
}

void	add_words(char *str, char **tr)
{
	int i;
	int j;
	int l;

	i = 0;
	j = 0;
	l = 0;
	while (str[i])
	{
		if (str[i] > 32)
		{
			l = num_of_letters(&str[i]);
			tr[j++] = get_word(str, (char *)malloc(sizeof(char *) * l), i);
			i += l;
		}
		else
		{
			i++;
		}
	}
	tr[j] = 0;
}

char	**ft_split_whitespaces(char *str)
{
	char	**tr;
	int		l;

	l = num_of_words(str);
	tr = (char **)malloc(sizeof(char **) * (l + 1));
	add_words(str, tr);
	tr[l] = 0;
	return (tr);
}
