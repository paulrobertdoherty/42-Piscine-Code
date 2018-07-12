/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 16:08:30 by pdoherty          #+#    #+#             */
/*   Updated: 2018/06/29 16:12:29 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	two_power(unsigned int p)
{
	if (p == 0)
		return (1);
	if (p == 1)
		return (2);
	return (2 * two_power(p - 1));
}

unsigned int	ft_active_bits(int value)
{
	unsigned int i;
	int b;

	i = 31;
	b = 0;
	while (i >= 0)
	{
		if (value & two_power(i) > 0)
		   b++;
		i--;
	}
	return (b);
}	
