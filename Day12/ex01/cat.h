#ifndef FT_DISPLAY_FILE_H
# define FT_DISPLAY_FILE_H

#include <unistd.h>
#include <fcntl.h>

# define BUFFER_SIZE 4096

int		read_file(char *name);
void	ft_putstr(char *str);
void	ft_putchar(char c);

#endif
