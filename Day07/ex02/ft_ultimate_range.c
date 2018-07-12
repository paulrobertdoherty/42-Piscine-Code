/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 20:15:10 by pdoherty          #+#    #+#             */
/*   Updated: 2018/06/27 20:15:27 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *tr;
	int i;
	int l;

	l = max - min;
	if (l <= 0)
	{
		*range = 0;
		return (0);
	}
	tr = malloc(sizeof(int) * l);
	i = 0;
	while (i < l)
	{
		tr[i] = i + min;
		i++;
	}
	*range = tr;
	return (i);
}
