struct Pilha{
  int item;
  struct Pilha *prox;
};
typedef struct Pilha pilha;

int pilha_vazia(pilha *PILHA){
  if(PILHA -> prox == NULL){
      return 1;
  }else{
      return 0;
  }
}
//---------------------------------------------------------

pilha* Empilha(pilha *PILHA, int tam){
  pilha *novo = (pilha*)malloc(sizeof(pilha));
  novo -> prox = NULL;

  printf("\nNovo item da pilha:");
  scanf("%d", &novo -> item);

  if(pilha_vazia(PILHA))
    PILHA -> prox = novo;
  else{
    pilha *temp = PILHA -> prox;
    while(temp -> prox != NULL){
      temp = temp -> prox;
    }
    temp -> prox = novo;
  }
  tam++;
  return novo -> item;
}

void Desempilha(pilha *PILHA, int tam){
  if(PILHA -> prox == NULL){
    printf("A pilha esvaziou !");
    return;
    
  }else{
    printf("\nItem removido com sucesso !");
    pilha *ultimo = PILHA -> prox;
    pilha *penultimo = PILHA;

    while(ultimo -> prox != NULL){
      penultimo = ultimo;
      ultimo = ultimo -> prox;
    }
    free(ultimo);
    penultimo -> prox = NULL;
    tam--;
  }
}

void ImprimirPilha(pilha *PILHA){
  if(pilha_vazia(PILHA)){
    printf("Pilha esta vazia..");
    return;
  }
  pilha *temp;
  temp = PILHA -> prox;
  printf("\n==PILHA==\n\n");
  
  while(temp != NULL){
    printf("%d ", temp -> item);
    temp = temp -> prox;
  }
}

void TopoPilha(pilha *PILHA){
  if(pilha_vazia(PILHA)) {
    printf("Pilha vazia. Não existe topo.\n");
    return;
  }
  pilha *temp;
  temp = PILHA -> prox;
  
  while(temp -> prox != NULL){
    temp = temp -> prox;
  }
  printf("Topo da pilha: %d\n", temp->item);
}

void LimparPilha(pilha *PILHA){
  if(pilha_vazia(PILHA)){ 
    printf("\nA Pilha ja esta vazia...\n\n");
    return;
      
  }else{
    while(!pilha_vazia(PILHA)){
      pilha *ultimo = PILHA -> prox;
      pilha *penultimo = PILHA;
      
      while(ultimo -> prox !=NULL){
        penultimo = ultimo;
        ultimo = ultimo -> prox;
      }
      free(ultimo);
      penultimo -> prox = NULL;
    }
    printf("\n\n A Pilha foi esvaziada com sucesso !\n\n");
  }
}
