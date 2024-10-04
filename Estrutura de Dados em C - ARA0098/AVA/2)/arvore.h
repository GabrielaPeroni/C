typedef struct no{
  int chave;
  struct no *esquerda, *direita;
}No;

typedef struct {
  No *raiz;
} Arvore;

int valor;

No* LogicaArvore_Inserir(No *raiz, int valor){  
  
    if (raiz == NULL){
      No *novo = (No*)malloc(sizeof(No));
      
      novo -> chave = valor;
      novo -> esquerda = NULL;
      novo -> direita = NULL;
      
      return novo;
    }else{ 
      
      if(valor < raiz -> chave)
        raiz -> esquerda = LogicaArvore_Inserir(raiz -> esquerda, valor);
      
      if(valor > raiz -> chave)
        raiz -> direita = LogicaArvore_Inserir(raiz -> direita, valor);
      
      return raiz;
  }
}

No* LogicaArvore_Remover(No *raiz, int valor){

  if(raiz == NULL){
    printf("Valor nao existe...");
    return NULL;
    
  }else{
    if(raiz -> chave == valor){
      if(raiz -> esquerda == NULL && raiz -> direita == NULL){
        free(raiz);
        
        return NULL;
        
      }else{
        if(raiz -> esquerda == NULL || raiz -> direita == NULL){
          No *temp;
          
          if(raiz -> esquerda != NULL)
            temp = raiz -> esquerda;
          else
            temp = raiz -> direita;
              
          free(raiz);
          return temp;
        }else{
          No *temp = raiz -> esquerda;
          
          while(temp -> direita != NULL)
            temp = temp -> direita;
          
          raiz -> chave = temp -> chave;
          temp -> chave = valor;
          raiz -> esquerda = LogicaArvore_Remover(raiz -> esquerda, valor);
          
          return raiz;
        }
      }
    }else{
      if(valor < raiz -> chave)
        raiz -> esquerda = LogicaArvore_Remover(raiz -> esquerda, valor);
      else
        raiz -> direita = LogicaArvore_Remover(raiz -> direita, valor);
      return raiz;
    }
  }
}

int MenorArvore(No *raiz){
  if (raiz == NULL){
    printf("arvore esta vazia, tente novamente..");
    return 0;
    
  }else if(raiz -> esquerda != NULL){
    return MenorArvore(raiz -> esquerda);
    
  }else{
    printf("Maior numero: %d", raiz -> chave);
    return raiz-> chave;
  }
}

int MaiorArvore(No *raiz){
  if (raiz == NULL){
    printf("arvore esta vazia, tente novamente..");
    return 0;
    
  }else if(raiz -> direita != NULL){
    return MaiorArvore(raiz -> direita);
    
  }else{
    printf("Maior numero: %d", raiz -> chave);
    return raiz-> chave;
  }
}

No* LogicaArvore_Buscar(No *raiz, int valor){
  if(raiz != NULL){
    if(raiz -> chave == valor){
      printf("Valor foi encontrado na Arvore !\n");
      
      }else if(valor < raiz -> chave) {
      LogicaArvore_Buscar(raiz -> esquerda, valor);
      
      }else {
      LogicaArvore_Buscar(raiz -> direita, valor);
      }
  
  }else{
    printf("Valor nao encontrado na Arvore..\n");
  }
}
//---------------------------------------------------------
//-------------------LOGICA DE IMPRESSAO-------------------
//---------------------------------------------------------

No* BuscarArvore(No* raiz){
  int buscar_arvore;

  printf("Digite o valor que deseja buscar: ");
  scanf("%d", &buscar_arvore);
  
  raiz = LogicaArvore_Buscar(raiz, buscar_arvore);
}

void ImprimirArvore(No *raiz){
  if(raiz != NULL){
    
    ImprimirArvore(raiz -> esquerda);
    printf("%d ", raiz -> chave);
    ImprimirArvore(raiz -> direita);
  }
}

void ImprimirArvoreInv(No *raiz){
  if(raiz != NULL){
    
    ImprimirArvore(raiz -> direita);
    printf("%d ", raiz -> chave);
    ImprimirArvore(raiz -> esquerda);
  }
}

No* RemoverArvore(No* raiz){
  int remover_arvore;

  printf("Qual numero deseja remover ? ");
  scanf("%d", &remover_arvore);
  
  raiz = LogicaArvore_Remover(raiz, remover_arvore);
}

No* InserirArvore(No* raiz){
  int input_arvore;

  printf("Digite input: ");
  scanf("%d", &input_arvore);
  
  raiz = LogicaArvore_Inserir(raiz, input_arvore);
  return raiz;
}
