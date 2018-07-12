/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 19:50:55 by pdoherty          #+#    #+#             */
/*   Updated: 2018/07/05 21:37:50 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

# include <stdlib.h>

typedef struct	s_btree
{
	struct s_btree		*parent;
	struct s_btree		*left;
	struct s_btree		*right;
	void				*data;
}				t_btree;

t_btree			*btree_create_node(void *item);

#endif
