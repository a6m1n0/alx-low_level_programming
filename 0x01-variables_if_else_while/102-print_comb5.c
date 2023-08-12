#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints using the puts function
 *
 * Return: Always 1 (Success)
 *
*/

int main(void)
{
int x = 0, y = 0;

for (; x <= 99; x++)
{
for (y = x + 1; y <= 99;  y++)
{

putchar((x / 10) + 48);
putchar((x % 10) + 48);

putchar(' ');

putchar((y / 10) + 48);
putchar((y % 10) + 48);
if (x >= 98 && y >= 99)
{
continue;
}
putchar(',');

if (y >= 99 && x >= 98)
{
continue;
}
putchar(' ');
}
}
putchar('\n');
return (0);
}
