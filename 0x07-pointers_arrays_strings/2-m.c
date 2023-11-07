#include "main.h"
#include <stdio.h>

int main(void)
{
	char *s = "Hello";
	char *f;

	f = _strchr(s, 'l');

	if (f != NULL)
		printf("%s\n", f);
	return (0);
}
