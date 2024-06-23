/*18. Faça um algoritmo que calcule o fatorial de um número 𝑛 informado pelo usuário.
O fatorial de um número é calculado pela multiplicação desse número por todos os seus
antecessores até chegar ao número 1.*/
#include <stdio.h>
int main(void){
    int n, i, final=1;

    printf("digite um numero: ");
    scanf("%d", &n);

    for (i = 1; i<=n; i++){
    final = final*i;
    }

    printf("o fatorial de %d e %d", n, final);
    return 0;
}
