/*15. Faça um algoritmo em C que imprima na tela os múltiplos de 5 entre 1 e 100.*/
#include <stdio.h>
int main(void){
    int i = 0;

    for(i = 1; i<=100; i++){
        if (i %5 == 0){
        printf("%d ",i);
        }
    }
    return 0;
}
