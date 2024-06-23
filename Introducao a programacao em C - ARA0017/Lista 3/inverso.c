/* 2.Elabore um programa em C que leia um vetor inteiro de tamanho 5 do teclado e imprima
esse vetor invertido. Exemplo: se o vetor lido é [2, 3, 4, 10, 0] então será imprimido na tela
o inverso, ou seja, [0, 10, 4, 3, 2].*/

#include <stdio.h>
#include <stdlib.h>

int main(){
int vet[5];

    printf("vvv Digite os 5 numeros vvv\n");
    for(int i = 4; i >= 0; i--){
        scanf("%d", &vet[i]);
    }

    printf("vvv Seus numeros sao vvv \n");
    for(int i = 0; i < 5; i++) printf("%d ", vet[i]);
    return 0;
}
