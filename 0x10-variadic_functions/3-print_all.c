#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything
 * @format: A list of tyoes of arguments passed to the function
 *
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str, *sp = "";
	int i = 0;

	va_start(args, format);
	if (format)
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sp, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", sp, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sp, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", sp, str);
					break;
				default:
					i++;
					continue;
			}
			sp = ", ";
			i++;
		}
	va_end(args);
	printf("\n");
}
