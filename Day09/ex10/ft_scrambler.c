/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 10:16:17 by pdoherty          #+#    #+#             */
/*   Updated: 2018/06/29 10:16:19 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int **a, int *b, int *******c, int ****d)
{
	int temp_a;
	int temp_b;
	int temp_c;
	int temp_d;

	temp_a = **a;
	temp_b = *b;
	temp_c = *******c;
	temp_d = ****d;
	**a = temp_a;
	*b = temp_b;
	*******c = temp_c;
	****d = temp_d;
}
