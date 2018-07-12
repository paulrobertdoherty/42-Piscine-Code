/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 20:31:50 by pdoherty          #+#    #+#             */
/*   Updated: 2018/07/03 18:27:27 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
#define DO_OP_H

#include <unistd.h>

typedef void (*operator)(int, int);

int	 ft_atoi(char *str);
void ft_putchar(char c);
void ft_putstr(char *str);
void ft_putnbr(int nbr);
void add(int n1, int n2);
void subtract(int n1, int n2);
void multiply(int n1, int n2);
void divide(int n1, int n2);
void modulo(int n1, int n2);
void zero(int n1, int n2);
operator get_function(char *o);
void execute(int n1, operator o, int n2);

#endif
