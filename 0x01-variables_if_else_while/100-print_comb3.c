#include <stdio.h>

/**
 * main - prints all possible different combination of two digits
 * seperated by ',', followed by a new line
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 56; i++)
		for (j = 49; j <= 57; j++)
		{
			if (j > i)
			{
				if (i == 56 && j == 57)
				{
					putchar(i);
					putchar(j);
				} else
				{
					putchar(i);
					putchar(j);
					putchar(',');
					putchar(' ');
				}
			}
		}
	putchar('\n');
	return (0);
}
