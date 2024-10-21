/*
Write a program that prints the alphabet in lowercase, followed by a new line.

Print all the letters except q and e
You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
All your code should be in the main function
You can only use putchar twice in your code
*/
#include <stdio.h>

int main (){

    for (int alpha = 'a'; alpha <= 'z'; alpha++)
        if (alpha != 'q' && alpha != 'e')
            putchar(alpha);     
    putchar('\n');   
    return 0;
}


/**
#include <stdlib.h>
#include <time.h>
#include <stdio.h>


 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)

int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
ch++;
}
putchar('\n');
return (0);
}
 */
