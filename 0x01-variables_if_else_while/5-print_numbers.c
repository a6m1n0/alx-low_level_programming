/*
Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

All your code should be in the main function
*/
#include <stdio.h>

int main (){

    for (char i = 0; i <= 9; i++)
        printf("%d",i);
    printf("\n");    
    return 0;
}

/**
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

 * main - prints all single digit numbers of base
 * 10 starting from 0, followed by a new line
 * Return: Always 0 (Success)

int main(void)
{
int n;
for (n = 0; n < 10; n++)
printf("%d", n);
printf("\n");
return (0);
}
 */
