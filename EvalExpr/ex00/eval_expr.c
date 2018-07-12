#include "eval_expr.h"

char	*eval(char *str)
{
	return (s(a(o(d(m(p(str)))))));
}

int		eval_expr(char *str)
{

	return (ft_atoi(eval(ft_strdup(str))));
}

int main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}