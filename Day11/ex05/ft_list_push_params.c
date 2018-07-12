/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 15:50:49 by pdoherty          #+#    #+#             */
/*   Updated: 2018/07/04 11:33:27 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int argc, char **argv)
{
	int			i;
	t_list		*tr;
	t_list		*ce;

	i = 1;
	tr = NULL;
	while (i < argc)
	{
		ce = ft_create_elem(argv[i]);
		ce->next = tr;
		tr = ce;
	}
	return (tr);
}
