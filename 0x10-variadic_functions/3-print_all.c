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
	char *str;
	int i = 0;

	va_start(args, format);
	if (format)
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 'i':
					printf("%i", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (!str)
						printf("(nil)");
					else
						printf("%s", str);
					break;
				default:
					i++;
					continue;
			}
			if (format[i + 1] != '\0')
				printf(", ");
			i++;
		}
	va_end(args);
	printf("\n");
}
