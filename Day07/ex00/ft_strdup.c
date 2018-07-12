/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 19:40:43 by pdoherty          #+#    #+#             */
/*   Updated: 2018/06/27 19:43:31 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_stdup(char *src)
{
	int			i;
	int			j;
	char		*tr;

	i = 0;
	while (src[i])
		i++;
	tr = malloc(sizeof(char) * (i + 1));
	j = 0;
	while (j <= i)
	{
		tr[j] = src[j];
		j++;
	}
	return (tr);
}
