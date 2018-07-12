/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 20:16:32 by pdoherty          #+#    #+#             */
/*   Updated: 2018/07/03 18:52:47 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	zero(int n1, int n2)
{
	n1 = n2;
	ft_putstr("0\n");
}

void		execute(int n1, operator o, int n2)
{
	o(n1, n2);
}

operator	get_function(char *o)
{
	operator tr;

	if (o[0] == '+')
		tr = &add;
	else if (o[0] == '-')
		tr = &subtract;
	else if (o[0] == '*')
		tr = &multiply;
	else if (o[0] == '/')
		tr = &divide;
	else if (o[0] == '%')
		tr = &modulo;
	else
		tr = &zero;
	return (tr);
}

int			main(int argc, char **argv)
{
	if (argc == 4)
	{
		execute(ft_atoi(argv[1]), get_function(argv[2]), ft_atoi(argv[3]));
	}
}
