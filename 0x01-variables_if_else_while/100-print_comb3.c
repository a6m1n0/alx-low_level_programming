/*
Write a program that prints all possible different combinations of two digits.

Numbers must be separated by ,, followed by a space
The two digits must be different
01 and 10 are considered the same combination of the two digits 0 and 1
Print only the smallest combination of two digits
Numbers should be printed in ascending order, with two digits
You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
You can only use putchar five times maximum in your code
You are not allowed to use any variable of type char
All your code should be in the main function
*/

#include <stdio.h>

int main (){
    int j,m;

        for (m = 0; m<=9; m++)
            for (j = m+1; j<=9; j++){
               printf("%d%d", m, j);
                if ( j + m != 17)
                    printf(", ");
            }

    return 0;
}

/**
#include <stdio.h>


 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)

int main(void)
{
int n, m;
for (n = 48; n <= 56; n++)
{
for (m = 49; m <= 57; m++)
{
if (m > n)
{
putchar(n);
putchar(m);
if (n != 56 || m != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
 */
