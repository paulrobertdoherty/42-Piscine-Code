/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 10:04:52 by pdoherty          #+#    #+#             */
/*   Updated: 2018/06/29 10:07:33 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		c(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s2[i] > 0)
		return (1);
	return (0);
}

char	*lc(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 'a' - 'A';
		i++;
	}
	return (str);
}

int		is_word(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (c(lc(&str[i]), "president") == 0
			|| c(lc(&str[i]), "attack") == 0
			|| c(lc(&str[i]), "bauer") == 0)
			return (1);
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		if (is_word(argv[i]))
			write(1, "Alert!!!", 8);
		i++;
	}
	return (0);
}
