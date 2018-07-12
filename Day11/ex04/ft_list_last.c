/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 12:34:09 by pdoherty          #+#    #+#             */
/*   Updated: 2018/07/04 22:41:13 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *tr;

	if (!begin_list)
		return (0);
	tr = begin_list;
	while (tr->next)
		tr = tr->next;
	return (tr);
}
