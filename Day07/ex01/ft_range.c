/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 20:15:43 by pdoherty          #+#    #+#             */
/*   Updated: 2018/06/27 20:42:03 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *tr;
	int i;
	int l;

	l = max - min;
	if (l <= 0)
		return (0);
	tr = malloc(sizeof(int) * l);
	i = 0;
	while (i < l)
	{
		tr[i] = i + min;
		i++;
	}
	return (tr);
}
