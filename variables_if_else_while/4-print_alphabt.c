#include <stdio.h>

/**
 * main - entry point
 *
 * description : print all letters except q & e
 *
 * Return: always 0 (Success)
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
