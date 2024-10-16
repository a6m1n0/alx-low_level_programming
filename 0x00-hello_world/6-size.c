/*
Write a C program that prints the size of various types on the computer it is compiled and run on.

You should produce the exact same output as in the example
Warnings are allowed
Your program should return 0
You might have to install the package libc6-dev-i386 on your Linux to test the -m32 gcc option
*/


#include <stdio.h>

int main(void){
    int i;
    printf("Size of a char: %lu byte(s)\n", sizeof(char));
    printf("Size of an int: %lu byte(s)\n",sizeof(int));
    printf("Size of a long int: %lu byte(s)\n",sizeof(long int));
    printf("Size of a long long int: %lu byte(s)\n",sizeof(long long int));    
    printf("Size of an float: %lu byte(s)\n", sizeof(float));
    return 0;
}















/**
#include <stdio.h>

*main - Entry point
*Description: A C program that prints with the puts function
*Return: Always 0 (success)

int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
*/
