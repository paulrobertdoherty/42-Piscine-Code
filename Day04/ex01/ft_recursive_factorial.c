/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 08:55:54 by pdoherty          #+#    #+#             */
/*   Updated: 2018/06/23 13:24:13 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	if (nb == 1 || nb == 2)
	{
		return (nb);
	}
	else
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
}
