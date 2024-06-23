/*5. Faça um programa que peça dois números ao usuário e mostre qual o maior e qual o
menor.*/
#include <stdio.h>
int main() {
    int N1,N2;

    printf("Digite o primeiro numero: ");
    scanf("%d",&N1);

    printf("Digite o segundo numero: ");
    scanf("%d",&N2);

    if (N1>N2){ 
        printf("%d e maior que %d !", N1, N2);}
    else if (N1<N2){
        printf("%d e maior que %d !", N2, N1);}
    else{ 
        printf("%d e igual a %d !", N2, N1);}
    return 0;
}
