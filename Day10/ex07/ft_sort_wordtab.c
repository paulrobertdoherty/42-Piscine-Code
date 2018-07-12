/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 21:10:17 by pdoherty          #+#    #+#             */
/*   Updated: 2018/07/03 14:23:46 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		j;
	int		smallest_index;
	char	*temp;

	i = 0;
	while (tab[i])
	{
		smallest_index = i;
		j = i;
		while (tab[j])
		{
			if (ft_strcmp(tab[j], tab[smallest_index]) < 0)
				smallest_index = j;
			j++;
		}
		temp = tab[smallest_index];
		tab[smallest_index] = tab[i];
		tab[i] = temp;
		i++;
	}
}
