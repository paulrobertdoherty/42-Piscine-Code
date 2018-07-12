/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 10:39:47 by pdoherty          #+#    #+#             */
/*   Updated: 2018/06/23 13:09:12 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int tr;
	int p;

	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	tr = nb;
	p = power - 1;
	while (p > 0)
	{
		tr = tr * nb;
		p = p - 1;
	}
	return (tr);
}
