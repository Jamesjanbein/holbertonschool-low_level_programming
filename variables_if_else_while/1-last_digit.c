#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 * main - entry point
 *
 * description: false or true validation
 *
 * Return: 0 (success)
*/


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10

	if (digit > 5)
		printf("last digit of %i is %i and is greater than 5\n", n, digit);
	else if (digit == 0)
		printf("last digit of %i is %i and is greater than 0\n", n, digit);
	else if 
		printf("last digit of %i is %i and is less than 6 and not 0\n", n, digit);
	return (0);
}