/*
Write a program that prints all possible combinations of single-digit numbers.

Numbers must be separated by ,, followed by a space
Numbers should be printed in ascending order
You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
All your code should be in the main function
You can only use putchar four times maximum in your code
You are not allowed to use any variable of type char
*/
#include <stdio.h>

int main (){

    for (int digits = 0; digits <= 9; digits++){
        putchar(digits + '0');
        if (digits !=9){
            putchar(',');
            putchar(' ');
        }
    }
    putchar('\n');    
    return 0;
}
/**
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)

int main(void)
{
int n;
for (n = 48; n < 58; n++)
{
putchar(n);
if (n != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
 */
