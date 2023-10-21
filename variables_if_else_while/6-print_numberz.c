#include <stdio.h>

/**
 * main - entry point
 *
 * Description : all s digi nbs
 *
 * Return: always 0 (Success)6-print_numberz.c
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
