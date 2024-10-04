struct Fila{
  int item;
  struct Fila *prox;
};
typedef struct Fila fila;

int fila_vazia(fila *FILA){
  if(FILA -> prox == NULL){
      return 1;
  }else{
      return 0;
  }
}

fila* Enqueue(fila *FILA, int tam){
  fila *novo = (fila*)malloc(sizeof(fila));
  novo -> prox = NULL;

  printf("\nNovo item da fila:");
  scanf("%d", &novo -> item);

  if(fila_vazia(FILA))
    FILA -> prox = novo;
  else{
    fila *temp = FILA -> prox;
    while(temp -> prox != NULL){
      temp = temp -> prox;
    }
    temp -> prox = novo;
  }
  tam++;
  return novo -> item;
}

void Dequeue(fila *FILA, int tam){
  if(FILA -> prox == NULL){
    printf("A fila esvaziou !");
    return;
  }else{
    printf("\nItem removido com sucesso !");
    fila *temp = FILA -> prox;
    FILA -> prox = temp -> prox;
    tam--;
    free(temp);
  }
}

void ImprimirFila(fila *FILA){
  if(fila_vazia(FILA)){
    printf("Fila esta vazia..");
    return;
  }
  fila *temp;
  temp = FILA -> prox;
  printf("\n==FILA==\n\n");
  
  while(temp != NULL){
    printf("%d ", temp -> item);
    temp = temp -> prox;
  }
}

void MaiorFila(fila *FILA){
  if(fila_vazia(FILA)) {
    printf("Fila está vazia...");
    return;
  }else{
   int maior = 0;
    
    fila *temp = FILA->prox;
    while (temp != NULL) {
      if (temp -> item > maior){
        maior = temp -> item;
      }
      temp = temp -> prox;
    }
  printf("\n\nMaior elemento da Fila: %d (+)\n", maior);
  }
}

void MenorFila(fila *FILA){
  if(fila_vazia(FILA)) {
    printf("Fila está vazia...");
    return;
  }else{
   int menor = 999999999;
    
    fila *temp = FILA->prox;
    while (temp != NULL) {
      if (temp -> item < menor){
        menor = temp -> item;
      }
      temp = temp -> prox;
    }
  printf("\n\nMenor elemento da Fila: %d (-)\n", menor);
  }
}

void LimparFila(fila *FILA){
  if(fila_vazia(FILA)){ 
    printf("\nA Fila ja esta vazia...\n\n");
    return;
      
  }else{
    while(!fila_vazia(FILA)){
      fila *ultimo = FILA -> prox;
      fila *penultimo = FILA;
      
      while(ultimo -> prox !=NULL){
        penultimo = ultimo;
        ultimo = ultimo -> prox;
      }
      free(ultimo);
      penultimo -> prox = NULL;
    }
    printf("\n\n A Fila foi esvaziada com sucesso !\n\n");
  }
}
