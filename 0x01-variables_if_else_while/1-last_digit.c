#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program generates a random number 'n', calculates its
 * last digit 'k', and it classifies based on whether it's greater than 5,
 * less than 6 and not 0, or equal to 0.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n, k;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	k = n % 10;
	printf("Last digit of %d ", n);
	if (k == 0)
		printf("is %d and is 0\n", k);
	else if (k > 5)
		printf("is %d and is greater than 5\n", k);
	else
		printf("is %d and is less than 6 and not 0\n", k);
	return (0);
}
