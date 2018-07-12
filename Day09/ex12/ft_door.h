#ifndef FT_DOOR_H
# define FT_DOOR_H

typedef struct	s_door
{
	int state;
}				t_door;

typedef int		ft_bool;

# define TRUE 1
# define OPEN 1
# define CLOSE 0
# define EXIT_SUCCESS 0

ft_bool	open_door(t_door *door);
ft_bool	close_door(t_door *door);
ft_bool is_door_open(t_door *door);
ft_bool	is_door_close(t_door *door);

#endif
