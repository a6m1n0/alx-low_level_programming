/*
Write a C program that prints exactly
`and that piece of art is useful" - Dora Korpar, 2015-10-19`
followed by a new line, to the standard error.


You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
Your program should return 1
Your program should compile without any warnings when using the -Wall gcc option

*/


#include <stdio.h>
#include <string.h>
#include <unistd.h>


int main(void){
    char *i = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
    write(2,i, strlen(i));
    return 1;
}


/**
#include <stdio.h>
#include <unistd.h>

*main - Entry point
*Description: A C program that prints with the puts function
*Return: Always 0 (success)

int main(void)
{
	write(2,
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
*/
