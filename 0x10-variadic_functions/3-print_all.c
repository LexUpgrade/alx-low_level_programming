#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: Things to print
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list ptr_args;
	int i = 0;
	char *str, *sep = "";

	va_start(ptr_args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(ptr_args, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(ptr_args, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(ptr_args, double));
					break;
				case 's':
					str = va_arg(ptr_args, char *);
					if (str)
						printf("%s%s", sep, str);
					else
						printf("(nil)");
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(ptr_args);
}
