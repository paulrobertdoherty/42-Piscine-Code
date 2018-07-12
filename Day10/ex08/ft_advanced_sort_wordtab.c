/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 21:25:42 by pdoherty          #+#    #+#             */
/*   Updated: 2018/07/03 22:21:12 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_wordtab(char **tab, int(*cmp)(char *, char*))
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
			if (cmp(tab[j], tab[smallest_index]) < 0)
				smallest_index = j;
			j++;
		}
		temp = tab[smallest_index];
		tab[smallest_index] = tab[i];
		tab[i] = temp;
	}
}
