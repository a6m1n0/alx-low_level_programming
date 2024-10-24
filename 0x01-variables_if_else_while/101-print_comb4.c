/*
Write a program that prints all possible different combinations of three digits.

Numbers must be separated by ,, followed by a space
The three digits must be different
012, 120, 102, 021, 201, 210 are considered the same combination of the three digits 0, 1 and 2
Print only the smallest combination of three digits
Numbers should be printed in ascending order, with three digits
You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
You can only use putchar six times maximum in your code
You are not allowed to use any variable of type char
All your code should be in the main function
*/

#include <stdio.h>

int main (){
    int i,j,m;

    for (i=0 ; i<=9; i++)
        for (m = i+1; m<=9; m++)
            for (j = m+1; j<=9; j++){
               printf("%d%d%d", i, m, j);
                if ( i + j + m != 24)
                    printf(", ");
            }

    return 0;
}

/**
#include <stdio.h>


 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)

int main(void)
{
int n, m, l;
for (n = 48; n < 58; n++)
{
for (m = 49; m < 58; m++)
{
for (l = 50; l < 58; l++)
{
if (l > m && m > n)
{
putchar(n);
putchar(m);
putchar(l);
if (n != 55 || m != 56)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
 */
