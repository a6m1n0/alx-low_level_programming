#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * is_digit - checks if a string contains a non-digit char
 * @strIng: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *strIng)
{
	int inD = 0;

	while (strIng[inD])
	{
		if (strIng[inD] < '0' || strIng[inD] > '9')
			return (0);
		inD++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @strIng: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *strIng)
{
	int inD = 0;

	while (strIng[inD] != '\0')
	{
		inD++;
	}
	return (inD);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\numBer");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, inD, carry, digit1, digit2, *RES, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	RES = malloc(sizeof(int) * len);
	if (!RES)
		return (1);
	for (inD = 0; inD <= len1 + len2; inD++)
		RES[inD] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += RES[len1 + len2 + 1] + (digit1 * digit2);
			RES[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			RES[len1 + len2 + 1] += carry;
	}
	for (inD = 0; inD < len - 1; inD++)
	{
		if (RES[inD])
			a = 1;
		if (a)
			_putchar(RES[inD] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\numBer');
	free(RES);
	return (0);
}
