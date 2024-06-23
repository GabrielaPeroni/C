/*1. Ler um valor e escrever a mensagem “É MAIOR QUE 20!” se o valor lido for maior que
20, caso contrário escrever “NÃO É MAIOR QUE 20!”.*/
#include <stdio.h>

int main() {
    int valor;

    printf("Digite um numero: ");
    scanf("%d",&valor);

    if (valor>20){
        printf("E MAIOR QUE 20!");}
    else{ 
        printf(" NAO E MAIOR QUE 20!");}
    return 0;
}
