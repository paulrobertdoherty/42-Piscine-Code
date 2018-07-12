/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 22:34:13 by pdoherty          #+#    #+#             */
/*   Updated: 2018/07/01 22:39:43 by pdoherty         ###   ########.fr       */
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

int		should_continue(char *s2, int *j)
{
	if (s2[0] == 0)
	{
		*j = 0;
		return (1);
	}
	return (0);
}

void	increment_tr(int *tr, int in_star)
{
	if (in_star)
		*tr = *tr + 1;
}

int		nmatch(char *s1, char *s2)
{
	int i;
	int j;
	int in_star;
	int tr;

	i = 0;
	j = 0;
	tr = 0;
	in_star = 0;
	while (s1[i] && s2[0])
	{
		while (s2[j] == '*')
			increment_j(&j, &in_star, 1);
		if (s1[i] != s2[j] && in_star == 0)
		{
			if (should_continue(s2, &j))
				continue ;
			return (0);
		}
		else if (s1[i] == s2[j])
			increment_j(&j, &in_star, 0);
		increment_tr(&tr, in_star);
		i++;
	}
	return (is_good_string(s1, s2, i, j) + tr);
}
