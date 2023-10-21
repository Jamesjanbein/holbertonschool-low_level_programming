#include <stdio.h>

/**
 * main - entry point
 *
 * Description : all s digi nbs
 *
 * Return: always 0 (Success)
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
