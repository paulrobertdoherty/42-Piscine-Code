/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 23:04:04 by pdoherty          #+#    #+#             */
/*   Updated: 2018/07/05 23:04:07 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree **root, void *data_ref,
							int (*cmpf)(void *, void *))
{
	if (root == NULL)
		return (NULL);
	if (root->left)
		return (btree_search_item(root->left, data_ref, cmpf));
	if (cmpf(root->data, data_ref) == 0)
		return (root);
	if (root->right)
		return (btree_search_item(root-right, data_ref, cmpf));
}
