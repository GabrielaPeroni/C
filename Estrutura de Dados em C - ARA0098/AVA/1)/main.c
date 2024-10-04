#include <stdio.h>
#include <stdlib.h>
#include "order.h"

int main(){
  int n;

  printf("== Digite o tamanho do vetor ==\n\n");
  scanf("%d", &n);

  int vector[n];
  int type = 0;
  
  printf("\n");
  for(int i = 0; i < n; i++){
    printf("Digite o %d digito: ", i+1);
    scanf("%d", &vector[i]);
    
  }
  printf("\n\n");
  printf("Escolha o tipo de ordenação: \n");
  printf("==1 - BUBBLE SORT== \n");
  printf("==2 - INSERTION SORT==\n\n");
  printf("Input: ");
  scanf("%d", &type);

  switch(type){

    case 1:// Bubble sort
      BubbleSort(n, vector);
      break;
  
    case 2:// Insertion sort
      InsertionSort(n, vector);
      break;
  
    default:
      printf("Input invalido, tente novamente..");
      break;
  }
  return 0;
}
