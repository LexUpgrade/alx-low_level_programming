#include "function_pointers.h"

/**
 * print_name - Prints a name using a function pointer
 * @name: Name to print.
 * @f: Function pointer to print a name.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
