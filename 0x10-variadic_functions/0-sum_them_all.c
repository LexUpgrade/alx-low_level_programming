#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all its parameters
 * @n: Number of parameters to pass
 *
 * Return: The sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	size_t i, sum = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);

	return (sum);
}
