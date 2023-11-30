#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line
 * @seperator: String to be printed between numbers
 * @n: Is the number of integers passed to the function
 *
 * Return: void.
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	size_t i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (seperator && (i != n - 1))
			printf("%s", seperator);
	}
	va_end(args);
	printf("\n");
}
