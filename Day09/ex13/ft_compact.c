/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 15:52:26 by pdoherty          #+#    #+#             */
/*   Updated: 2018/06/29 15:52:45 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_compact(char **tab, int length)
{
	int i;
	int c;
	int li;

	i = 0;
	li = 0;
	c = 0;
	while (i < length)
	{
		if (tab[i][0])
		{
			tab[c] = tab[i];
			li = i;
			c++;
		}
		i++;
	}
	tab[i] = 0;
	return (c);
}