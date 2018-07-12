/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 18:24:37 by pdoherty          #+#    #+#             */
/*   Updated: 2018/07/08 20:14:43 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct	s_val
{
	char *value;
	int si;
	int ei;
}				t_val;

typedef struct	s_vals
{
	struct s_val	*value;
	struct s_vals	*next;
}				t_vals;

typedef char *(*symbol)(char *, char *);

char	*m(char *str);
char	*d(char *str);
char	*o(char *str);
char	*a(char *str);
char	*s(char *str);
int		eval_expr(char *str);
char	*eval(char *str);
int		ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nbr);
char	*ft_strdup(char *src);
int		ft_strlen(char *str);
char	*ft_itoa(int num);
void	add_val(t_vals *vals, t_val *val);
void	add_vals(int *str_len, t_vals *vals);
char	*liberate(char *str, t_vals *vals, char *tr);
char	*cat(char *str, t_vals *vals, int str_len);
int		end_paren(int *i, int *p, int *m, t_val *tr);
t_val	*get_val_in_p(char *str, int index);
t_vals	*get_vals_in_p(char *str, int *str_len);
char	*p(char *str);
int		find_index(char *str, int si, int increment);
char	*copy_from(char *str, char *tr, int bi, int ei);
t_val	*call(symbol s, char *str, int i, int *l);
t_val	*get_val(char *value, int si, int ei);
char	*perform(char *str, char c, symbol s);
char	*multiply(char *num1, char *num2);
char	*divide(char *num1, char *num2);
char	*modulo(char *num1, char *num2);
char	*add(char *num1, char *num2);
char	*subtract(char *num1, char *num2);

#endif
