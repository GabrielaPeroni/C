#include <stdio.h>
#include <stdlib.h>

#include "pilha.h"
#include "fila.h"
#include "arvore.h"

int main(){
  int tam = 0; 
  int tipo_estrutura = 0;
  int maior = 0, menor = 0;
  int opcao_pilha = 0, opcao_fila = 0, opcao_arvore = 0;
  
  pilha *PILHA = (pilha *)malloc(sizeof(pilha));
  PILHA -> prox = NULL;

  fila *FILA = (fila *)malloc(sizeof(fila));
  FILA -> prox = NULL;

  Arvore arvore;
  arvore.raiz = NULL;
  No *raiz = NULL;
  
  do{
    printf("Escolha o tipo de Estrutura: \n");
    printf("==1 - Executar Pilha== \n");
    printf("==2 - Executar Fila==\n");
    printf("==3 - Executar Arvore==\n");
    printf("==0 - Sair==\n\n");
    printf("Input: ");
    scanf("%d", &tipo_estrutura);
    
    switch(tipo_estrutura){
        
      case 1:// Pilha
        do{
          printf("\n\n---PILHA---\n\n");
          printf("=1 - Empilha=\n");
          printf("=2 - Desempilha=\n");
          printf("=3 - Imprimir= \n");
          printf("=4 - Imprimir Topo=\n");
          printf("=5 - Limpar Pilha=\n");
          printf("=0 - Sair=\n\n");
          printf("Input: ");
          scanf("%d", &opcao_pilha);
          
          switch(opcao_pilha){
          
            case 1:
              Empilha(PILHA, tam);
              break;
            
            case 2:
              Desempilha(PILHA, tam);
              break;
            
            case 3:
              ImprimirPilha(PILHA);
              break;
            
            case 4:
              TopoPilha(PILHA);
              break;
            
            case 5:
              LimparPilha(PILHA);
              break;
            }
          }while(opcao_pilha !=0);
        break;
    
      case 2:// Fila
        do{
          printf("\n\n---FILA---\n\n");
          printf("=1 - Enqueue=\n");
          printf("=2 - Dequeue=\n");
          printf("=3 - Imprimir= \n");
          printf("=4 - (+)Maior Elemento=\n");
          printf("=5 - (-)Menor Elemento=\n");
          printf("=6 - Limpar Fila=\n");
          printf("=0 - Sair=\n\n");
          printf("Input: ");
          scanf("%d", &opcao_fila);
    
          switch(opcao_fila){
          
            case 1:
              Enqueue(FILA, tam);
              break;
            
            case 2:
              Dequeue(FILA, tam);
              break;
            
            case 3:
              ImprimirFila(FILA);
              break;
            
            case 4:
              MaiorFila(FILA);
              break;
            
            case 5:
              MenorFila(FILA);
              break;
            
            case 6:
              LimparFila(FILA);
              break;
            }
          }while(opcao_fila !=0);
        break;

      case 3:// Arvore
        do{
          printf("\n\n---ARVORE---\n\n");
          printf("=1 - Inserir= \n");
          printf("=2 - Remover= \n");
          printf("=3 - (+)Maior Elemento)=\n");
          printf("=4 - (-)Menor Elemento=\n");
          printf("=5 - Buscar= \n");
          printf("=6 - Imprimir= \n");
          printf("=7 - Imprimir(Invertido)= \n");
          printf("=0 - Sair==\n\n");
          printf("Input: ");
          scanf("%d", &opcao_arvore);
    
          switch(opcao_arvore){

            case 1:
              raiz = InserirArvore(raiz);
              break;
            
            case 2:
              raiz = RemoverArvore(raiz);
              break;
            
            case 3:
              maior = MaiorArvore(raiz);
              break;
            
            case 4:
              menor = MenorArvore(raiz);
              break;
            
            case 5:
              raiz = BuscarArvore(raiz);
              break;
            
            case 6:
              printf("\n==ARVORE==\n\n");
              ImprimirArvore(raiz);
              break;

            case 7:
              printf("\n==ARVORE (invertida)==\n\n");
              ImprimirArvoreInv(raiz);
              break;
            }
          }while(opcao_arvore !=0);
        break;
      }
    }while(tipo_estrutura !=0);
  return 0;
}
