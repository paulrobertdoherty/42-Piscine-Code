/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 23:26:48 by pdoherty          #+#    #+#             */
/*   Updated: 2018/07/05 23:29:07 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	btree_level_count(t_btree *root)
{
	int lb;
	int rb;

	if (root == NULL)
		return (0);
	lb = btree_level_count(root->left);
	rb = btree_level_count(root->right);
	if (lb > rb)
		return (lb + 1);
	return (rb + 1);
}
