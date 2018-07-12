#include "eval_expr.h"

char	*multiply(char *num1, char *num2)
{
	int n1;
	int n2;

	n1 = ft_atoi(num1);
	n2 = ft_atoi(num2);
	return (ft_itoa(n1 * n2));
}

char	*divide(char *num1, char *num2)
{
	int n1;
	int n2;

	n1 = ft_atoi(num1);
	n2 = ft_atoi(num2);
	return (ft_itoa(n1 / n2));
}

char	*modulo(char *num1, char *num2)
{
	int n1;
	int n2;

	n1 = ft_atoi(num1);
	n2 = ft_atoi(num2);
	return (ft_itoa(n1 % n2));
}

char	*add(char *num1, char *num2)
{
	int n1;
	int n2;

	n1 = ft_atoi(num1);
	n2 = ft_atoi(num2);
	return (ft_itoa(n1 + n2));
}

char	*subtract(char *num1, char *num2)
{
	int n1;
	int n2;

	n1 = ft_atoi(num1);
	n2 = ft_atoi(num2);
	return (ft_itoa(n1 - n2));
}
