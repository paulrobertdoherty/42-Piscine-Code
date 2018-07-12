/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 22:50:23 by pdoherty          #+#    #+#             */
/*   Updated: 2018/07/04 11:34:48 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_reverse(t_list **begin_list)
{
	t_list *first;
	t_list *next;

	if (*begin_list == NULL)
		return ;
	first = *begin_list;
	next = *begin_list->next;
	if (next == NULL)
		return ;
	ft_list_reverse(&next);
	first->next->next = first;
	first->next = NULL;
	*begin_list = next;
}
