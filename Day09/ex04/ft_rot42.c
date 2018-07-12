/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 21:46:03 by pdoherty          #+#    #+#             */
/*   Updated: 2018/06/28 22:22:40 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	rotate(char c, int si)
{
	return (((c - si) + 1) % 26) + si;
}

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] = rotate(str[i], 65);
		else if (str[i] > 96 && str[i] < 127)
			str[i] = rotate(str[i], 97);
		i++;
	}
	return (str);
}
