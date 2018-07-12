/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 16:37:35 by pdoherty          #+#    #+#             */
/*   Updated: 2018/07/04 11:34:27 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*tr;

	i = 0;
	tr = begin_list;
	while (tr->next)
	{
		if (i == nbr)
			return (tr);
		tr = tr->next;
		i++;
	}
	if (nbr == 0)
		return (tr);
	return (NULL);
}
