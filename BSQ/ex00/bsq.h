/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 19:22:00 by pdoherty          #+#    #+#             */
/*   Updated: 2018/07/11 23:10:05 by pdoherty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct			s_square
{
	int					size;
	int					x;
	int					y;
}						t_square;

typedef struct			s_squares
{
	struct s_square		*value;
	struct s_squares	*next;
}						t_squares;

typedef struct			s_chars
{
	char				c;
	struct s_chars		*previous;
	struct s_chars		*next;
}						t_chars;

void					add_square(t_squares *squares, t_square *square);
t_square				*make_square(int x, int y, int size);
t_square				*get_square(char **grid, int i, int j, char *c);
void					get_all_squares(char **g, t_squares *s, char *c);
t_square				*find_best(t_squares *squares);
t_square				*get_biggest_square(char **grid, char *chars);
void					free_square_list(t_squares *squares, t_square *best);
void					free_grid(char **grid);
void					free_line(t_chars *first_line);
int						read_from_in(int in);
int						get_cchars(char *cchars, int *height, int in);
char					**get_first_line(char **g, char *c, int h, int in);
char					**get_grid(char **g, char *c, int height, int in);
char					**first_to_grid(char **g, t_chars *f, int i, int h);
t_chars					*get_char(t_chars **first_chars, char c);
int						print_map(char **grid, t_square *square, char *chars);
int						power(int num, int a);
char					**list_to_line(char **grid, t_chars *char_list);
t_chars					*get_list(int in);
void					read_stdin(void);

#endif
