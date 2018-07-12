/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 15:21:55 by pdoherty          #+#    #+#             */
/*   Updated: 2018/06/21 16:21:04 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int divided;
	int remainder;

	divided = a / b;
	remainder = a % b;
	*div = divided;
	*mod = remainder;
}
