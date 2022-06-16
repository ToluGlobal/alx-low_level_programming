#include "variadic_functions.h"

/**
 * sum_them_all - A function that returns the sum of all its parameters.
 * @n: number of the arguments.
 *
 * Return: sum of the argument.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list mylist;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(mylist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(mylist, int);

	va_end(mylist);

	return (sum);
}
