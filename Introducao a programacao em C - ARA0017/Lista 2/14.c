/*14. Desenvolva um programa em C que imprima os números ímpares entre 1 e 100.*/
#include <stdio.h>
int main(void){
    int i = 0;

    for(i = 1; i<=100; i++){
        if (i %2 == 1){
            printf("%d ",i);
        }
    }
    return 0;
}
