/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 23:23:56 by pdoherty          #+#    #+#             */
/*   Updated: 2018/07/04 11:35:29 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
				void *data_ref, int (*cmp)(int, int))
{
	t_list *tr;

	tr = begin_list;
	while (tr)
	{
		if (cmp(tr->data, data_ref) == 0)
			f(tr->data);
		tr = tr->next;
	}
}
