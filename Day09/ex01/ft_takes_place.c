/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 18:54:14 by pdoherty          #+#    #+#             */
/*   Updated: 2018/06/28 19:38:45 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour == 0)
		printf("12.00 A.M. to 1.00 A.M.\n");
	else if (hour < 11)
		printf("%d.00 A.M. AND %d.00 A.M.\n", hour, hour + 1);
	else if (hour == 11)
		printf("11.00 A.M. AND 12.00 P.M.\n");
	else if (hour == 12)
		printf("12.00 P.M. AND 1.00 P.M.\n");
	else if (hour > 12 && hour <= 22)
		printf("%d.00 P.M. AND %d.00 P.M.\n", hour - 12, hour - 11);
	else
		printf("11.00 P.M. AND 12.00 A.M.\n");
}
