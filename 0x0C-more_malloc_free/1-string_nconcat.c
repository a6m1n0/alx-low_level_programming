#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;

unsigned int index1 = 0, index2 = 0, length1 = 0, length2 = 0;

while (s1 && s1[length1])
    length1++;
while (s2 && s2[length2])
    length2++;

if (n < length2)
    result_string = malloc(sizeof(char) * (length1 + n + 1));
else
    result_string = malloc(sizeof(char) * (length1 + length2 + 1));

if (!result_string)
    return (NULL);

while (index1 < length1)
{
    result_string[index1] = s1[index1];
    index1++;
}

while (n < length2 && index1 < (length1 + n))
    result_string[index1++] = s2[index2++];

while (n >= length2 && index1 < (length1 + length2))
    result_string[index1++] = s2[index2++];

result_string[index1] = '\0';

return (result_string);
}
