/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 15:24:40 by pdoherty          #+#    #+#             */
/*   Updated: 2018/06/23 13:00:12 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int i;
	int j;
	int p;

	if (nb <= 1)
		return (2);
	i = nb;
	while (1)
	{
		j = 2;
		p = 1;
		while (j < i)
		{
			if (i % j == 0)
				p = 0;
			j++;
		}
		if (p == 1)
			return (i);
		i++;
	}
}
