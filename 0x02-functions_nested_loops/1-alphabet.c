/*
Write a function that prints the alphabet, in lowercase, followed by a new line.

Prototype: void print_alphabet(void);
You can only use _putchar twice in your code
*/

#include <stdio.h>

void print_alphabet(){
    for (char alphabet = 'a'; alphabet <= 'z'; alphabet++)
        putchar(alphabet);
    putchar('\n');
}

int main() {

    print_alphabet();
    return 0;
}
