/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 20:39:01 by pdoherty          #+#    #+#             */
/*   Updated: 2018/06/25 20:40:28 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		length(char *src)
{
	int i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char		*ft_strcat(char *dest, char *src)
{
	int dl;
	int i;

	dl = length(dest);
	i = 0;
	while (src[i])
	{
		dest[dl] = src[i];
		dl++;
		i++;
	}
	dest[dl] = 0;
	return (dest);
}
