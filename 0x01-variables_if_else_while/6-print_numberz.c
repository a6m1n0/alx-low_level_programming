/*
Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

You are not allowed to use any variable of type char
You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
You can only use putchar twice in your code
All your code should be in the main function
*/
#include <stdio.h>

int main (){

    for (int i = 0; i <= 9; i++)
        putchar(i + '0');
    putchar('\n');    
    return 0;
}

/**
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

* main - prints all single digit numbers of base 10 starting from 0,
* followed by a new line, using putchar
* Return: Always 0 (Success)

int main(void)
{
int n;
for (n = 48; n < 58; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
*/
