#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @Xal: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int Xal)
{
	void *ptr;

	ptr = malloc(Xal);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
