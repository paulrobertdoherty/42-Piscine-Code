/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 23:55:08 by pdoherty          #+#    #+#             */
/*   Updated: 2018/07/01 11:52:20 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	increment_j(int *j, int *in_star, int in_star_value)
{
	*in_star = in_star_value;
	*j = *j + 1;
}

int		is_good_string(char *s1, char *s2, int i, int j)
{
	while (s2[j])
	{
		if (s2[j] != '*')
			return (0);
		j++;
	}
	return ((s1[i] == 0) && (s2[j] == 0));
}

int		match(char *s1, char *s2)
{
	int i;
	int j;
	int in_star;

	i = 0;
	j = 0;
	in_star = 0;
	while (s1[i] && s2[0])
	{
		while (s2[j] == '*')
			increment_j(&j, &in_star, 1);
		if (s1[i] != s2[j] && in_star == 0)
		{
			if (s2[0] == '*')
			{
				j = 0;
				continue ;
			}
			return (0);
		}
		else if (s1[i] == s2[j])
			increment_j(&j, &in_star, 0);
		i++;
	}
	return (is_good_string(s1, s2, i, j));
}
