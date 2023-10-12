#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line
 * @seperator: String to be printed between the strings
 * @n: Number of strings passed to the function
 *
 * Return: Nothing.
 */
void print_strings(const char *seperator, unsigned int n, ...)
{
	va_list str_args;
	size_t i;
	char *str;

	va_start(str_args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(str_args, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i != (n - 1) && seperator)
			printf("%s", seperator);
	}
	va_end(str_args);

	printf("\n");
}
