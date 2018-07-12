/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 19:41:17 by pdoherty          #+#    #+#             */
/*   Updated: 2018/07/05 21:40:24 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *tr;

	tr = malloc(sizeof(t_btree));
	if (tr)
	{
		tr->data = item;
		tr->parent = NULL;
		tr->left = NULL;
		tr->right = NULL;
	}
	return (tr);
}
