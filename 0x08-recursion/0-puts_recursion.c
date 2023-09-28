#include "main.h"

/**
 * custom_puts_recursion - prints a string, followed by a new line
 * @str: string to print
 */
void custom_puts_recursion(char *str)
{
	if (*str == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*str);
	custom_puts_recursion(str + 1);
}
