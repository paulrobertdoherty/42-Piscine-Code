/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 21:37:29 by pdoherty          #+#    #+#             */
/*   Updated: 2018/06/22 15:55:57 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int i;
	int j;
	int temp;

	j = 0;
	while (str[j] != 0)
	{
		j = j + 1;
	}
	j = j - 1;
	i = 0;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i = i + 1;
		j = j - 1;
	}
	return (str);
}
