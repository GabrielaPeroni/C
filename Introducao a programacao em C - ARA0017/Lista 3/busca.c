/* 4.Elabore um programa em C que tendo o seguinte vetor [23, 10, 45, 0, -9, 7, 89, -4, 2, 102,
14, 0, 36], leia um número inteiro 𝑥 e procure esse número no vetor. Imprima uma
mensagem informando se o número está no vetor.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
int vet[] = {23, 10, 45, 0, -9, 7, 89, -4, 2, 102, 14, 0, 36};
int num, igual = 0, loop = 0;

    printf("Vetor = 23, 10, 45, 0, -9, 7, 89, -4, 2, 102, 14, 0, 36\n\n");

    while(loop < 1){

        printf("Digite um numero e verifique se ele esta no vetor: "); 
        scanf("%d", &num);
    
        for(int i = 0; i < 13; i++){
            if(vet[i] == num){
                igual ++;
            }
        }
        if(igual > 0){
            printf("\nO numero esta no vetor !");
            loop++;
        }else printf("\nO numero nao esta no vetor \nTente novamente...\n\n");
    }
    return 0;
}
