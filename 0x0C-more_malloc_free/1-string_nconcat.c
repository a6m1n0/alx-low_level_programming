#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates numBer bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @numBer: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int numBer)
{
	char *strIng;
	unsigned int inD = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (numBer < len2)
		strIng = malloc(sizeof(char) * (len1 + numBer + 1));
	else
		strIng = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!strIng)
		return (NULL);

	while (inD < len1)
	{
		strIng[inD] = s1[inD];
		inD++;
	}

	while (numBer < len2 && inD < (len1 + numBer))
		strIng[inD++] = s2[j++];

	while (numBer >= len2 && inD < (len1 + len2))
		strIng[inD++] = s2[j++];

	strIng[inD] = '\0';

	return (strIng);
}
