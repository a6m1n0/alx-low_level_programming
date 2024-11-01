/*
Write a function that prints the sign of a number.

Prototype: int print_sign(int n);
Returns 1 and prints + if n is greater than zero
Returns 0 and prints 0 if n is zero
Returns -1 and prints - if n is less than zero
*/

#include <stdio.h>


int print_sign(int n){
    if (n > 0){
        printf("+");
        return 1;
    }
    else if (n < 0){
        printf("-");
        return -1;
    }
    else{
        printf("0");        
        return 0;
    }
}

int main (){
  int n;
  scanf("%d",&n);
  print_sign(n);

  return 0;
}
