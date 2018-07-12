/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 10:39:34 by pdoherty          #+#    #+#             */
/*   Updated: 2018/06/27 16:06:50 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	putstr(char *str)
{
	if (str[0])
	{
		ft_putchar(str[0]);
		putstr(&str[1]);
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = argc - 1;
	while (i > 0)
	{
		putstr(argv[i]);
		ft_putchar('\n');
		i--;
	}
	return (0);
}
