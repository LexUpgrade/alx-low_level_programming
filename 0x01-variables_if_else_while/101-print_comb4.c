#include <stdio.h>

/**
 * main - Prints all possible different combinations of three digits
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i <= 57; i++)
		for (j = 49; j <= 57; j++)
			for (k = 50; k <= 57; k++)
			{
				if (k > j && j > i)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != 55)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
	putchar('\n');
	return (0);
}
