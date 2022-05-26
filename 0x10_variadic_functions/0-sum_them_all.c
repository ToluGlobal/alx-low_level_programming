#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all additional arguments
 * @n: number of additional arguments
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum = 0;
va_list listed;

va_start(listed,n);

for (i = 0; i < n; i++)
sum += va_arg(listed, int);

va_end(listed);

return (sum);
}
