/*
Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.

You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
All your code should be in the main function
You can only use putchar three times in your code
*/
#include <stdio.h>

int main (){

    for (char alpha = 'a'; alpha <= 'z'; alpha++)
        putchar(alpha);

    for (char alpha = 'A'; alpha <= 'Z'; alpha++)
        putchar(alpha);
    putchar('\n');   
    return 0;
}

/**
#include <stdio.h>
#include <time.h>
#include <stdio.h>

 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)

int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
 */
