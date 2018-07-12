#include "cat.h"

int	read_file(char *name)
{
	int file; 
	int i;
	char buffer[BUFFER_SIZE + 1];

	file = open(name, O_RDONLY);
	if (file < 0)
		return (0);
	while ((i = read(file, buffer, BUFFER_SIZE)))
	{
		buffer[i] = 0;
		ft_putstr(buffer);
	}
	close(file);
	return (1);
}

void	display_in()
{
	char buffer;

	while (read(0, &buffer, 1) != 0)
		ft_putchar(buffer);
}

int main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc == 1)
	{
		display_in();
		return (0);
	}
	while (i < argc)
	{
		if (!read_file(argv[i++]))
		{
			ft_putstr("cat: ");
			ft_putstr(argv[i]);
			ft_putstr(": No  such file or directory\n");
		}
	}
	return (0);
}
