/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 17:10:54 by pdoherty          #+#    #+#             */
/*   Updated: 2018/07/08 20:29:28 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

int		ft_atoi(char *str)
{
	int tr;
	int i;

	tr = 0;
	i = 0;
	if (str[0] == '-')
		i = 1;
	while (str[i])
	{
		if (str[i] > 47 && str[i] < 58)
		{
			tr = (tr * 10) + (str[i] - 48);
		}
		else if (tr > 0)
		{
			break ;
		}
		i++;
	}
	if (str[0] == '-')
		tr *= -1;
	return (tr);
}
