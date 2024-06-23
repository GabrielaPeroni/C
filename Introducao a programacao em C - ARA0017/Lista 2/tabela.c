/*8. Escreva um algoritmo em linguagem C que leia o código de um determinado produto e
apresente a sua classificação de acordo com a tabela abaixo:
1        - Alimento nao perecivel
2,3 ou 4 - Alimento perecivel
5 ou 6   - Vestuario
7 ate 12 - Limpeza
outro    - Opcao invalida*/
#include <stdio.h>
int main() {
    int code;

    printf("Digite o codigo: ");
    scanf("%d",&code);

    if (code == 1){ 
        printf("Alimento não perecivel");}
    else if (4>=code && code>=2){ 
        printf("Alimento perecivel");}
    else if (6>=code && code>=5){ 
        printf("Vestuario");}
    else if (12>=code && code>=7){ 
        printf("Limpeza");}
    else{
        printf("Opcao invalida");}
  return 0;
}
