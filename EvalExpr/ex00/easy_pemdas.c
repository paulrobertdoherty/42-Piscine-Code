#include "eval_expr.h"

char *m(char *str)
{
	return (perform(str, '*', &multiply));
}

char *d(char *str)
{
	return (perform(str, '/', &divide));
}

char *o(char *str)
{
	return (perform(str, '%', &modulo));
}

char *a(char *str)
{
	return (perform(str, '+', &add));
}

char *s(char *str)
{
	return (perform(str, '-', &subtract));
}
