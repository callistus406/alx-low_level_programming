#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all -  sum all arguments
 * @n: int, number of undefined arguments
 *
 * Return: sum of args
 * On error, 0 is returned
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	if (n == 0)
		return (sum);

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
