/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 10:04:47 by pdoherty          #+#    #+#             */
/*   Updated: 2018/06/23 13:20:23 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int tr;
	int n;

	tr = nb;
	if (nb < 0 || tr > 12)
		return (0);
	if (nb == 0)
		return (1);
	n = nb - 1;
	while (n > 1)
	{
		tr = tr * n;
		n = n - 1;
	}
	return (tr);
}
