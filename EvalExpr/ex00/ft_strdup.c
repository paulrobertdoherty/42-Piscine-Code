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

#include "eval_expr.h"

char	*ft_strdup(char *src)
{
	int			i;
	char		*tr;

	i = 0;
	while (src[i])
		i++;
	tr = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (src[i])
	{
		tr[i] = src[i];
		i++;
	}
	tr[i] = src[i];
	return (tr);
}
