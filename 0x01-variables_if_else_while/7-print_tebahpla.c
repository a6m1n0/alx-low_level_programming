/*
Write a program that prints the lowercase alphabet in reverse, followed by a new line.

You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
All your code should be in the main function
You can only use putchar twice in your code
*/
#include <stdio.h>

int main (){

    for (int alpha = 'z'; alpha >= 'a'; alpha--)
        putchar(alpha);
    putchar('\n');    
    return 0;
}


/**
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)

int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
 */
