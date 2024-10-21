/*
Write a program that prints the lowercase alphabet in reverse, followed by a new line.

You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
All your code should be in the main function
You can only use putchar twice in your code
*/
#include <stdio.h>

int main (){

    for (int digits = 0x30; digits <= 0x39; digits++)
        putchar(digits);
    for (int letters = 0x61; letters <= 0x66; letters++ )   
        putchar(letters); 
    putchar('\n');    
    return 0;
}

/**
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 
int main(void)
{
int n;
char ch;
for (n = 48; n < 58; n++)
{
putchar(n);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}

 */
