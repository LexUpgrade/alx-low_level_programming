#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @seperator: String to be printed between strings
 * @n: Number of strings to print
 *
 * Return: void.
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	size_t i;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (seperator && (i != n - 1))
			printf("%s", seperator);
	}
	va_end(args);
	printf("\n");
}
