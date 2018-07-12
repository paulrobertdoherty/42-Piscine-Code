#include "eval_expr.h"

void	add_val(t_vals *vals, t_val *val)
{
	t_vals *temp;
	t_vals *plus;

	temp = vals;
	while (temp->next)
		temp = temp->next;
	plus = malloc(sizeof(t_vals));
	plus->value = val;
	plus->next = NULL;
	temp->next = plus;
	*vals = *temp;
}

void	add_vals(int *str_len, t_vals *vals)
{
	t_vals *temp;

	temp = vals;
	while (temp->value != NULL)
	{
		*str_len += ft_strlen(temp->value->value);
		temp = temp->next;
	}
}

char	*liberate(char *str, t_vals *vals, char *tr)
{
	t_vals *temp;

	free(str);
	while (vals != NULL)
	{
		temp = vals;
		if (vals->value != NULL)
			free(temp->value->value);
		free(temp->value);
		vals = vals->next;
		free(temp);
	}
	return (tr);
}

char	*cat(char *str, t_vals *vals, int str_len)
{
	int i;
	int j;
	int k;
	char *tr;

	i = -1;
	j = 0;
	tr = malloc(sizeof(char *) * str_len);
	printf("%s\n", str);
	while (str[++i])
	{
		printf("%s\n", vals->value);
		if (vals->value != NULL)
		{
			if (i == vals->value->si)
			{
				k = 0;
				while (vals->value->value[k])
					tr[j++] = vals->value->value[k++];
				i = vals->value->ei;
				vals = vals->next;
				continue ;
			}
		}
		else
			tr[j++] = str[i];
	}
	return (liberate(str, vals, tr));
}
