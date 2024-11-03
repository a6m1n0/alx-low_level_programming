/*
Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.

Prototype: void jack_bauer(void);
You can listen to this soundtrack while coding :)
*/

#include<stdio.h>

void jack_bauer(void){
    for (int i = 00; i<= 23; i++)
        for (int j = 00; j <= 59; j++)
            printf("%02d:%02d\n",i,j);
}

int main(){
	jack_bauer();
	return 0;
} 
