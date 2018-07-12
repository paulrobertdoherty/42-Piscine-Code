/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 12:54:57 by pdoherty          #+#    #+#             */
/*   Updated: 2018/06/27 16:06:58 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_str(char *str)
{
	if (str[0])
	{
		ft_putchar(str[0]);
		print_str(&str[1]);
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		print_str(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
