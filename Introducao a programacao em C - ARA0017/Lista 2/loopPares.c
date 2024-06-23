/*12. Elabore um código que imprima uma sequência de 1 até 100 somente com os números
pares dessa sequência.*/
#include <stdio.h>
int main(void){
    int i = 0;

    for(i = 1; i<=100; i++){
        if (i %2 == 0){
            printf("%d ",i);
        }
    }
    return 0;
}
