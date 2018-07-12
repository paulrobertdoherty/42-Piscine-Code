/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 12:19:41 by pdoherty          #+#    #+#             */
/*   Updated: 2018/06/27 17:44:37 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	if (str[0])
	{
		ft_putchar(str[0]);
		ft_putstr(&str[1]);
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int		find_smallest_index(char **argv, int argc, int i)
{
	int j;
	int smallest_index;

	j = i;
	smallest_index = i;
	while (j < argc)
	{
		if (ft_strcmp(argv[j], argv[smallest_index]) < 0)
			smallest_index = j;
		j++;
	}
	return (smallest_index);
}

int		main(int argc, char **argv)
{
	int		i;
	int		smallest_index;
	char	*temp;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			smallest_index = find_smallest_index(argv, argc, i);
			temp = argv[smallest_index];
			argv[smallest_index] = argv[i];
			argv[i] = temp;
			i++;
		}
		i = 1;
		while (i < argc)
		{
			ft_putstr(argv[i++]);
			ft_putchar('\n');
		}
	}
	return (0);
}
