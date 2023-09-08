#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, l;

	for (i = 48; i <= 57; i++)
		for (j = 48; j <= 57; j++)
			for (k = 48; k <= 57; k++)
				for (l = 49; l <= 57; l++)
				{
					if (i != k && j != l)
					{
						if (i == 57 && j == 56)
						{
							putchar(i);
							putchar(j);
							putchar(' ');
							putchar(k);
							putchar(l);
						} else
						{
							putchar(i);
							putchar(j);
							putchar(' ');
							putchar(k);
							putchar(l);
							putchar(',');
							putchar(' ');
						}
					}
				}
	putchar('\n');
	return (0);
}
