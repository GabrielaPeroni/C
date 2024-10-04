typedef struct registro{
  int conteudo;
  struct registro *proximo;
} Item;

void inserir(Item **cabeca){
  Item *itemATUAL, *itemNOVO;
  int numero;

  printf("\nInforme o Item:  ");
  scanf("%d", &numero);

  if (*cabeca == NULL){
    
    *cabeca = (Item*) malloc(sizeof(Item));
    (*cabeca) -> conteudo = numero;
    (*cabeca) -> proximo = NULL;
  }
  else{
    itemATUAL = *cabeca;
    while (itemATUAL -> proximo != NULL){
      itemATUAL = itemATUAL -> proximo;
    }
    itemNOVO = (Item*)malloc(sizeof(Item));
    itemNOVO -> conteudo = numero;
    itemNOVO -> proximo = NULL;
    itemATUAL -> proximo = itemNOVO;
  }
}

  void imprimir (Item *itemATUAL){
    if (itemATUAL == NULL){
      printf("\nInput invalido, tente novamente...\n");
      
      return;
    }else{
      while (itemATUAL != NULL){
        printf("Item: %d | ", itemATUAL -> conteudo);
        
        itemATUAL = itemATUAL -> proximo;
      }
    }
  }
  void imprimirINVERSO(Item *itemATUAL){
    if (itemATUAL == NULL){
      printf("\nInput invalido, tente novamente...\n");
      
      return;
    }else{
        imprimirINVERSO (itemATUAL -> proximo);
          printf("Item inverso: %d ", itemATUAL -> conteudo);
      }
    }
  void imprimirMAIOR(Item *itemATUAL){
    int Maior = 0;
    
    if (itemATUAL == NULL){
      printf("\nInput invalido, tente novamente...\n");

      return;
    }else{
      while (itemATUAL != NULL){

        if(itemATUAL -> conteudo > Maior){
          Maior = itemATUAL -> conteudo;
        }
        itemATUAL = itemATUAL -> proximo;
      }
      printf("\n\nMaior Item: %d \n", Maior);
    }
  }
  