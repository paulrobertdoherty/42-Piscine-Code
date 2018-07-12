/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 21:43:57 by pdoherty          #+#    #+#             */
/*   Updated: 2018/06/23 21:44:00 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

int isPositiveSlope(int i, int j, int width, int height)
{
	if (i == 0 && j == 0)
		return (1);
	if (i == width - 1 && j == height - 1 && width > 1 && height > 1)
		return (1);
	return (0);
}

int isNegativeSlope(int i, int j, int width, int height)
{
	if (i == 0 && j == height - 1 && height > 1)
		return (1);
	if (i == width - 1 && width > 1 && j == 0)
		return (1);
	return (0);
}

int isStar(int i, int j, int width, int height)
{
	if (i == 0)
		return (1);
	if (j == 0)
		return (1);
	if (i == width - 1 && width > 1)
		return (1);
	if (j == height - 1 && height > 1)
		return (1);
	return (0);
}

char get_char(int i, int j, int width, int height)
{
	if (isPositiveSlope(i, j, width, height))
		return ('/');
	if (isNegativeSlope(i, j, width, height))
		return ('\\');
	if (isStar(i, j, width, height))
		return ('*');
	return (' ');
}

void rush(int width, int height)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < height)
	{
		while (i < width)
		{
			ft_putchar(get_char(i, j, width, height));
			i++;
		}
		i = 0;
		ft_putchar('\n');
		j++;
	}
}
