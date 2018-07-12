/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 20:31:50 by pdoherty          #+#    #+#             */
/*   Updated: 2018/07/03 21:59:30 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
#define DO_OP_H

#include <unistd.h>

typedef void (*operator)(int, int);

typedef struct s_opp
{
	char     *c;
	operator  o;
}              t_opp;

int	 ft_atoi(char *str);
void ft_putchar(char c);
void ft_putstr(char *str);
void ft_putnbr(int nbr);
void ft_add(int n1, int n2);
void ft_sub(int n1, int n2);
void ft_mul(int n1, int n2);
void ft_div(int n1, int n2);
void ft_mod(int n1, int n2);
void ft_usage(int n1, int n2);
operator get_function(char *o);
void execute(int n1, operator o, int n2);

#endif
