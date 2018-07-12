/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 09:28:55 by pdoherty          #+#    #+#             */
/*   Updated: 2018/06/24 14:29:02 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	get_star(int width, int i, int index, int l)
{
	int s;

	if (l <= 1 && i == width / 2 && index == l + 2)
		return ('|');
	if (l > 1 && i >= l)
	{
		if (l % 2 == 1)
		{
			s = l;
		}
		else
		{
			s = l + 1;
		}
		if (i >= (width / 2) - (s / 2) && i <= (width / 2) + (s / 2))
		{
			if (index >= (l + 3) - s)
			{
				if (l > 3 && i == (width / 2) + ((s / 2) - 1) && index == l)
					return ('$');
				return ('|');
			}
		}
	}
	return ('*');
}

void	print_level(int width, int l, int index, int size)
{
	int i;

	i = 0;
	ft_putchar('/');
	while (i < width)
	{
		if (size > 1 && l < size - 1)
		{
			ft_putchar('*');
		}
		else
		{
			ft_putchar(get_star(width, i, index, l));
		}
		i++;
	}
	ft_putchar('\\');
	ft_putchar('\n');
}

void	increment(int *width, int *level, int *index)
{
	*index = *index + 1;
	if (*index == *level + 3)
	{
		*level = *level + 1;
		*index = 0;
		*width += 6 + (2 * ((*level - 1) / 2));
	}
	else
	{
		*width += 2;
	}
}

int		ft_max_width(int size)
{
	int index;
	int level;
	int width;

	index = -1;
	level = 0;
	width = 1;
	while (level < size)
	{
		index++;
		if (index == level + 3)
		{
			level++;
			if (level == size)
				return (width);
			index = 0;
			width += 6 + (2 * ((level - 1) / 2));
		}
		else
		{
			width += 2;
		}
	}
	return (width);
}

void	sastantua(int size)
{
	int width;
	int level;
	int index;
	int max_width;
	int i;

	width = 1;
	max_width = ft_max_width(size);
	level = 0;
	index = 0;
	while (level < size)
	{
		i = 0;
		while (i < (((max_width - width) / 2) - 1))
		{
			ft_putchar(' ');
			i++;
		}
		print_level(width, level, index, size);
		increment(&width, &level, &index);
	}
}
