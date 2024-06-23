/*5.Faça um programa que tendo dois vetores de tamanho 5, verifique e informe se os dois
vetores são iguais.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
int i = 0, vet[5], vet2[5], igual = 0;

    printf("vvv Digite os primeiros 5 numeros vvv\n");
    while(i < 5){
        scanf("%d", &vet[i]);
        i++;
    }i = 0;

    printf("vvv Digite os outros 5 numeros vvv\n");
    while(i < 5){
        scanf("%d", &vet2[i]);
        i++; 
    }i = 0;

    while(i < 5){
        if(vet[i] == vet2[i]){
            igual++;
        }i++;

    }if(igual == 5)printf("Os vetores digitados sao iguais !");
    else printf("Os vetores digitados sao diferentes.");
    return 0;
}
