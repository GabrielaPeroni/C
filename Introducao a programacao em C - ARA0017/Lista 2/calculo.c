/*17. Faça um programa que leia 10 números e calcule: a soma desses números, a média
desses números e o maior e o menor número.*/
#include <stdio.h>
int main(void){
    float i , a, maior=0, menor=1000, soma=0, media;

    for(i = 1; i<=10; i++){
        printf("digite um numero: ");
        scanf("%f",&a);
        soma = soma + a;

        if (a <= menor){
            menor = a;}
        if (a >= maior){
            maior = a;
        }
    }
    media = soma/10;
    printf("a soma dos numeros é %.2f\na media dos numeros é %.2f\no maior numero e %.2f\no menor numero e %.2f\n", soma, media, maior, menor);
    return 0;
}
