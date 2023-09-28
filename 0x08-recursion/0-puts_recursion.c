#include "main.h"

/**
 * _puts_recursion - main - Entry point
 * Return: Always 0 (Success)
 * @s: string to print
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
