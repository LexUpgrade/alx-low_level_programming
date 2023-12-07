#include <stdio.h>

void print_first(void); __attribute__((constructor))
/**
 * print_first - Executes before the main function
 *
 * Return: void.
 */
void print_first(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
