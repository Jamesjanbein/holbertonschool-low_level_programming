#include "main.h"
  
/**
 * print_last_digit - ls dg of nb
 *
 * @n: input
 *
 * Return: Always 0 (Success)
*/

int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
		lastDigit = -1 * (n % 10);
	else
		lastDigit = n % 10;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
