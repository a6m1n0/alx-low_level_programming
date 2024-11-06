/*
Write a function that prints the 9 times table, starting with 0.

Prototype: void times_table(void);
Format: see example
*/

#include <stdio.h>

void times_table(void){

    for(int i=0; i<=9; i++){
        for(int j=0; j<=9; j++){
                printf("%2d",i*j);

                if (j != 9)
                    printf(", ");
            
            }
        printf("\n");
    }

}

int main(){
    times_table();   
    return 0;
}
