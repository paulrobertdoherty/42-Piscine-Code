/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 20:16:32 by pdoherty          #+#    #+#             */
/*   Updated: 2018/07/03 22:02:17 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include "ft_opp.h"

void	ft_usage(int n1, int n2)
{
	n1 = n2;
	ft_putstr("error : only [ + - * / % ] are accepted.\n");
}

void		execute(int n1, operator o, int n2)
{
	o(n1, n2);
}

operator	get_function(char *o)
{
	int i;

	i = 0;
	while (i < 5)
	{
		if (o[0] == g_opptab[i].c[0])
			return g_opptab[i].o;
		i++;
	}
	return (g_opptab[5].o);
}

int			main(int argc, char **argv)
{
	if (argc == 4)
	{
		execute(ft_atoi(argv[1]), get_function(argv[2]), ft_atoi(argv[3]));
	}
}
