/*5.Elabore um algoritmo em C que tendo um vetor de tamanho n, imprima o vetor ordenado
 crescentemente. Ex: se o vetor lido for [2, 10, 13, 1] então o vetor ordenado em ordem
crescente é [1, 2, 10, 13]*/
#include <stdio.h>
#include <stdlib.h>

int main(){
int num, x, y, temp;

    printf("Digite a quantidade de numeros desejada: ");
    scanf("%d", &num);

    int vet[num];

    for (int i = 0; i < num; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &vet[i]);
    }
    for (x = 0; x < num - 1; x++) {
        for (y = 0; y < num - 1 - x; y++) {
            if (vet[y] > vet[y + 1]) {
                temp = vet[y];
                vet[y] = vet[y + 1];
                vet[y + 1] = temp;
            }
        }
    }printf("Os numeros ordenados sao: ");
    for (int i = 0; i < num; i++)printf("%d ", vet[i]);
    return 0;
}
