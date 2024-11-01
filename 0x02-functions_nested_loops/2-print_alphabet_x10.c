/*
Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.

Prototype: void print_alphabet_x10(void);
You can only use _putchar twice in your code
*/

#include <stdio.h>

int print_alphabet_x10(){
  
    for (int i = 0; i < 10; i++ ){
        for (char alphabet = 'a'; alphabet<= 'z';alphabet++)
            putchar(alphabet);
        putchar('\n');    
    }

}

int main (void){
  print_alphabet_x10();
  return 0;
}
