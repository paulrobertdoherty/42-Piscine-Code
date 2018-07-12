/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 22:39:43 by pdoherty          #+#    #+#             */
/*   Updated: 2018/07/05 22:59:58 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree *root, void *item,
						int (*cmpf)(void *, void *))
{
	if (root == NULL)
	{
		root = btree_create_node(item);
		return ;
	}
	if (cmpf(root, root->left) <= 0)
	{
		btree_insert_data(root->left, item, cmpf);
		root->left->parent = root;
	}
	else
	{
		btree_insert_data(root->right, item, cmpf);
		root->right->parent = root;
	}
}
