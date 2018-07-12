/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 18:31:02 by pdoherty          #+#    #+#             */
/*   Updated: 2018/07/03 21:56:07 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	ft_add(int n1, int n2)
{
	ft_putnbr(n1 + n2);
	ft_putchar('\n');
}

void ft_sub(int n1, int n2)
{
	ft_putnbr(n1 - n2);
	ft_putchar('\n');
}

void ft_mul(int n1, int n2)
{
	ft_putnbr(n1 * n2);
	ft_putchar('\n');
}

void ft_div(int n1, int n2)
{
	if (n2 == 0)
		ft_putstr("Stop: division by zero\n");
	else
		ft_putnbr(n1 / n2);
	ft_putchar('\n');
}

void ft_mod(int n1, int n2)
{
	if (n2 == 0)
		ft_putstr("Stop: modulo by zero\n");
	else
		ft_putnbr(n1 % n2);
	ft_putchar('\n');
}
