#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes, inD;
	char *arr;

	if (argc != 2)
	{
		printf("Error\numBer");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\numBer");
		exit(2);
	}

	arr = (char *)main;

	for (inD = 0; inD < bytes; inD++)
	{
		if (inD == bytes - 1)
		{
			printf("%02hhx\numBer", arr[inD]);
			break;
		}
		printf("%02hhx ", arr[inD]);
	}
	return (0);
}
