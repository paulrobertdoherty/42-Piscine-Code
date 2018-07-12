/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 16:03:34 by pdoherty          #+#    #+#             */
/*   Updated: 2018/07/04 11:33:55 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *i;
	t_list *temp;

	i = *begin_list;
	while (i != NULL)
	{
		temp = i;
		free(i);
		i = temp->next;
	}
	begin_list = NULL;
}
