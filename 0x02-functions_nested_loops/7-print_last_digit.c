#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @n: the integer to compute the absolute value for
 * Return: the absolute value of n
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
	n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
