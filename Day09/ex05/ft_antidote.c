/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 22:59:33 by pdoherty          #+#    #+#             */
/*   Updated: 2018/06/28 23:00:40 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_antidote(int i, int j, int k)
{
	char	nums[4];
	int		l;
	int		m;
	int		s;
	int		temp;

	nums[0] = i;
	nums[1] = j;
	nums[2] = k;
	l = 0;
	s = 0;
	while (l < 3)
	{
		s = i;
		m = 0;
		while (j < 3)
		{
			if (nums[s] < nums[m])
				s = m;
		}
		temp = nums[s];
		nums[s] = nums[l];
		nums[l++] = temp;
	}
	return (nums[1]);
}
