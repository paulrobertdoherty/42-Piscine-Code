/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 13:58:54 by pdoherty          #+#    #+#             */
/*   Updated: 2018/06/28 14:05:58 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_swap(char *str1, char *str2);
int		ft_strcmp(char *str1, char *str2);
int		ft_atoi(char *nbr);
void	ft_putnbr(int n);
char	*ft_strcat(char *dest, char *src);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, int n);
int		ft_strlen(char *str);

#endif
