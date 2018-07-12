/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 12:16:44 by pdoherty          #+#    #+#             */
/*   Updated: 2018/06/29 12:17:50 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H

typedef struct	s_perso
{
	char	*name;
	float	life;
	int		age;
	char	*profession;
}				t_perso;

# define SAVE_THE_WORLD "Accounting"

#endif
