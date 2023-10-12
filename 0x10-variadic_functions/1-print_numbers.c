#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers, followed by a new line
 * @seperator: String to be printed between numbers
 * @n: Number of integers passed to the function
 *
 * Return: Nothing.
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list ap;
	size_t i, n1;

	va_start(ap, n);

	n1 = n - 1;
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i != n1 && seperator)
			printf("%s", seperator);
	}
	printf("\n");

	va_end(ap);
}
