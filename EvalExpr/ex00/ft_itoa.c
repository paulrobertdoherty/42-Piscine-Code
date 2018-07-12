#include "eval_expr.h"

int		length(int num)
{
	int i;

	i = 1;
	if (num < 0)
		num *= -1;
	while (num > 9)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int num)
{
	char 	*tr;
	int 	i;
	int		l;

	if (num == -2147483647)
		return "-2147483647";
	if (num == 0)
		return "0";
	l = length(num);
	if (num < 0)
		l++;
	tr = malloc(sizeof(char *) * (l + 1));
	i = l - 1;
	tr[l] = 0;
	if (num < 0)
	{
		tr[0] = '-';
		num *= -1;
	}
	while (num > 0)
	{
		tr[i] = (num % 10) + 48;
		num /= 10;
		i--;
	}
	return (tr);
}
