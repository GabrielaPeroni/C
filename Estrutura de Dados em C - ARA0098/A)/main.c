#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

void inserir(Item **cabeca);
void imprimir (Item *itemATUAL);

int main(){

  int opcao;
  Item *cabeca = NULL;

  do {
    
    printf("\n\n--Opçoes--");
    printf("\n1 -> Inserir novo Item;");
    printf("\n2 -> Imprimir os Items;");
    printf("\n3 -> Imprimir os Items Invertidos;");
    printf("\n4 -> Imprimir o maior Item;");
    printf("\n0 -> Sair");
    printf("\n\nDigite a Opçao: ");
    scanf("%d", &opcao);
    
    switch(opcao) {
      case 1: inserir(&cabeca);
        break;
      
      case 2: imprimir(cabeca); 
        break;

      case 3: imprimirINVERSO(cabeca); 
        break;
      
      case 4: imprimirMAIOR(cabeca); 
        break;
      
      case 0: break;
      
      default: 
        printf("\n\n Opcao Invalida, tente novamente...");
      }
    }
  while (opcao != 0);
    return 0;
}
