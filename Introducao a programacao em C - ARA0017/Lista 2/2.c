/*2. Escreva um programa em C que recebe um inteiro e diga se é par ou ímpar.*/
#include <stdio.h>
int main() {
    int A;

    printf("Digite um numero: ");
    scanf("%d",&A);

    if (A%2 == 0){ 
        printf("%d e par", A);}
    else{ 
        printf("%d e impar", A);}
    return 0;
}
