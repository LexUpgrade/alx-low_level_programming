#include "variadic_functions.h"
#include <stddef.h>
#include <stdarg.h>

/**
 * sum_them_all - Sums all integer arguments passed to it.
 * @n: Number of arguments passed
 *
 * Return: Sum of all arguments.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	size_t i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}
