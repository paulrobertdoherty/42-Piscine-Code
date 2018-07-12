/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 18:31:02 by pdoherty          #+#    #+#             */
/*   Updated: 2018/07/03 21:38:32 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	add(int n1, int n2)
{
	ft_putnbr(n1 + n2);
	ft_putchar('\n');
}

void subtract(int n1, int n2)
{
	ft_putnbr(n1 - n2);
	ft_putchar('\n');
}

void multiply(int n1, int n2)
{
	ft_putnbr(n1 * n2);
	ft_putchar('\n');
}

void divide(int n1, int n2)
{
	if (n2 == 0)
		ft_putstr("Stop: division by zero\n");
	else
		ft_putnbr(n1 / n2);
	ft_putchar('\n');
}

void modulo(int n1, int n2)
{
	if (n2 == 0)
		ft_putstr("Stop: modulo by zero\n");
	else
		ft_putnbr(n1 % n2);
	ft_putchar('\n');
}
