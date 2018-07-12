#include "eval_expr.h"

int		end_paren(int *i, int *p, int *m, t_val *tr)
{
	(*p)--;
	if (*p == 0)
	{
		if (*m == 0)
		{
			tr->value = malloc(sizeof(char *) * ((tr->ei - tr->si) + 1));
			*m = 1;
			*i = tr->si;
			return (1);
		}
		else
		{
			tr->ei = *i;
			tr->value[tr->ei - tr->si] = 0;
			return (0);
		}
	}
	return (1);
}

t_val	*get_val_in_p(char *str, int index)
{
	int p;
	int m;
	char *value;
	t_val *tr;

	p = 0;
	m = 0;
	tr = malloc(sizeof(t_val));
	tr->si = index + 2;
	while (str[++index])
	{
		if (str[index] == '(')
			p++;
		else if (str[index] == ')')
		{
			if (end_paren(&index, &p, &m, tr))
				continue ;
			else
				break ;
		}
		else if (m == 1)
			tr->value[index - tr->si] = str[index];
	}
	value = eval(tr->value);
	free(tr->value);
	tr->value = value;
	return (tr);
}

t_vals	*get_vals_in_p(char *str, int *str_len)
{
	t_vals *tr;
	int i;
	int m;

	tr = (t_vals *)malloc(sizeof(t_vals));
	tr->value = NULL;
	tr->next = NULL;
	i = 0;
	m = 0;
	while (str[i])
	{
		if (str[i] == '(')
			m = 1;
		if (m == 0)
			(*str_len)++;
		else
		{
			add_val(tr, get_val_in_p(str, i - 1));
			(*str_len) += tr->value->ei - i;
			i = tr->value->ei;
			m = 0;
			continue ;
		}
		i++;
	}
	return (tr);
}

char	*p(char *str)
{
	int str_len;
	t_vals *vals;
	char *tr;

	str_len = 0;
	vals = get_vals_in_p(str, &str_len);
	add_vals(&str_len, vals);
	tr = cat(str, vals, str_len);
	return (tr);
}
