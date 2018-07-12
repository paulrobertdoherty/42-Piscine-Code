/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 16:28:06 by pdoherty          #+#    #+#             */
/*   Updated: 2018/06/29 16:28:32 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	add_chars(char *str, char *to_add, int *i)
{
	int j;

	j = 0;
	while (to_add[j])
	{
		str[*i] = to_add[j];
		*i = *i + 1;
		j++;
	}
}

char	*ft_join(char **tab, char *sep)
{
	int i;
	int l;
	char *tr;

	i = 0;
	l = 0;
	while (tab[i])
	{
		l += strlen(tab[i++]);
	}
	if (i >= 2)
		i--;
	if (i < 2)
		i = 0;
	tr = (char *)malloc(sizeof((char *)) * (l + (i * strlen(sep))));
	i = 0;
	while (tab[i])
	{
		if (i > 0)
			add_chars(tr, sep, &i);
		add_chars(tr, tab[i], &i);
	}
	return (tr);
}
