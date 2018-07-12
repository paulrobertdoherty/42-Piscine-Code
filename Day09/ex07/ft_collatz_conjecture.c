/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 09:12:09 by pdoherty          #+#    #+#             */
/*   Updated: 2018/06/29 09:12:26 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	unsigned int f;
	unsigned int n;

	f = 0;
	n = base;
	while (n > 1)
	{
		if (n % 2 == 0)
		{
			n /= 2;
		}
		else
		{
			n = (3 * n) + 1;
		}
		f++;
	}
	return (f);
}
