#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @dest: string to append to
 * @src: string to concatenate from
 * @n: number of bytes from src to concatenate to dest
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *dest, char *src, unsigned int n)
{
    char *result;
    unsigned int index  = 0, j_l = 0, len_dest = 0, len_src = 0;

    while (dest && dest[len_dest])
        len_dest++;
    while (src && src[len_src])
        len_src++;

    if (n < len_src)
        result = malloc(sizeof(char) * (len_dest + n + 1));
    else
        result = malloc(sizeof(char) * (len_dest + len_src + 1));

    if (!result)
        return (NULL);

    while (index < len_dest)
    {
        result[index] = dest[index];
        index++;
    }

    while (n < len_src && index < (len_dest + n))
        result[index++] = src[j_l++];

    while (n >= len_src && index < (len_dest + len_src))
        result[index++] = src[j_l++];

    result[index] = '\0';

    return (result);
}

