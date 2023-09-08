#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - checks if a n is negative or positive then print it
 * Followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("%d is negative\n", n);
	} else if (n == 0)
	{
		printf("0 is zero\n");
	} else if (n > 0)
	{
		printf("%d is positive\n", n);
	}

	return (0);
}
