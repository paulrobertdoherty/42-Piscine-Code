#include "eval_expr.h"

int		find_index(char *str, int si, int increment)
{
	int i;
	int m;

	i = si;
	m = 1;
	while (i > 0 && str[i])
	{
		if (str[i] < 48 || str[i] > 57)
		{
			if (!m)
				break ;
		}
		else
			m = 0;
		i += increment;
	}
	return (i);
}

char *copy_from(char *str, char *tr, int bi, int ei)
{
	int i;
	int j;

	i = bi;
	j = 0;
	while (i < ei)
		tr[j++] = str[i++];
	return (tr);
}

t_val	*get_val(char *value, int si, int ei)
{
	t_val *tr;

	tr = malloc(sizeof(t_val));
	tr->value = value;
	tr->si = si;
	tr->ei = ei;
	return (tr);
}

t_val	*call(symbol s, char *str, int i, int *l)
{
	char *first;
	char *second;
	int bi;
	int ei;
	char *tr;

	bi = find_index(str, i, -1);
	ei = find_index(str, i, 1);
	first = malloc(sizeof(char *) * ((i - bi) - 1));
	second = malloc(sizeof(char *) * ((ei - i) - 2));
	first = copy_from(str, first, bi, i - 1);
	second = copy_from(str, second, i + 2, ei);
	tr = s(first, second);
	*l += ft_strlen(tr) - (ei - bi);
	free(first);
	free(second);
	return (get_val(tr, bi, ei));
}

char	*perform(char *str, char c, symbol s)
{
	int i;
	int l;
	t_vals *tr;

	i = 0;
	l = 0;
	tr = malloc(sizeof(t_vals));
	tr->value = NULL;
	tr->next = NULL;
	while (str[i])
	{
		if (str[i] == c)
			add_val(tr, call(s, str, i, &l));
		else
			l++;
		i++;
	}
	return (cat(str, tr, l));
}
