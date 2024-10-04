//Gabriela Peroni 202202162876

// Questao 1, 2 e 3
// Arquivo main.c
#include "funcoes.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  int quantidade_alunos;
  int i, j;

  printf("Digite a quantidade desejado de alunos: ");
  scanf("%d", &quantidade_alunos);

  Aluno alunos[quantidade_alunos];

  printf("\n--Digite os dados do Aluno--\n");

  for (i = 0; i < quantidade_alunos; i++) {
    printf("\n\n%d aluno:\n\n", i+1);

    printf("Digite o nome: ");
    scanf("%s", alunos[i].nome);

    printf("Digite o endereco: ");
    scanf("%s", alunos[i].endereco);

    printf("Digite a idade: ");
    scanf("%d", &alunos[i].idade);

    for (j = 0; j < 3; j++) {
      printf("Digite a %d nota: ", j + 1);
      scanf("%f", &alunos[i].nota[j]);
    }
  }
  printf("\n\n-----DADOS-----\n");
  
  dadosAlunos(alunos, quantidade_alunos);
  contaMedia(alunos, quantidade_alunos);
  contaMaior(alunos, quantidade_alunos);

  return 0;
}
// Questao 1, 2 e 3
// Arquivo funcoes.h
typedef struct Aluno {
  char nome[50];
  char endereco[50];
  int idade;
  float nota[3];
} Aluno;
// Funcao da Questao 1
void dadosAlunos(Aluno alunos[], int quantidade_alunos) {

  for (int i = 0; i < quantidade_alunos; i++) {
    printf("\n\n-Aluno %d-\n", i + 1);

    printf("\nNome: %s", alunos[i].nome);
    printf("\nEndereco: %s", alunos[i].endereco);
    printf("\nIdade: %d", alunos[i].idade);
  }
}
// Funcao da Questao 2
void contaMedia(Aluno alunos[], int quantidade_alunos) {
  float media = 0;
  
  printf("\n\n--NOTAS--\n");

  for (int i = 0; i < quantidade_alunos; i++) {
    media = (alunos[i].nota[0] + alunos[i].nota[1] + alunos[i].nota[2]) / 3;
    
    printf("\n\nAluno %d", i + 1);
    
    for (int j = 0; j < 3; j++) {
      printf("\nNota %d: %.2f", j + 1, alunos[i].nota[j]);
    }
    printf("\n\nMedia das notas: %.2f", media);
  }
}
// Funcao da Questao 3
void contaMaior(Aluno alunos[], int quantidade_alunos) {
  float media[quantidade_alunos];
  float maior = 0;

  for (int i = 0; i < quantidade_alunos; i++) {
    media[i] = (alunos[i].nota[0] + alunos[i].nota[1] + alunos[i].nota[2]) / 3;

    if (maior < media[i]) {
      maior = media[i];
    }
  }
  printf("\n\nA maior media é %.2f !", maior);
}
//----------------------------------------------------------------------------------------
// Questao 4 e 5
// Arquivo main.c
#include "funcoes.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  int quantidade_livros;
  int i;

  printf("Digite a quantidade desejada de livros: ");
  scanf("%d", &quantidade_livros);

  Livro livros[quantidade_livros];

  printf("\n--Digite os dados dos Livros--");
  
  for (i = 0; i < quantidade_livros; i++) {
    printf("\n\n%d livro:\n", i+1);

    printf("Digite o autor: ");
    scanf("%s", livros[i].autor);

    printf("Digite o titulo: ");
    scanf("%s", livros[i].titulo);

    printf("Digite a editora: ");
    scanf("%s", livros[i].editora);

    printf("Digite a data de publicacao: ");
    scanf("%d", &livros[i].ano_pub);
  }
  
  printf("\n\n---Livros ordenados por data de Publicacao---\n");
  livroCrescente(livros, quantidade_livros);
  
  return 0;
}
// Questao 4 e 5
// Arquivo funcoes.h
typedef struct Livro {
  char autor[50];
  char titulo[50];
  char editora[50];
  int ano_pub;
} Livro;

void dadosLivros(Livro livros[], int quantidade_livros) {
  for (int i = 0; i < quantidade_livros; i++) {
    printf("\n\n--Livro %d--", i + 1);

    printf("\nAutor: %s", livros[i].autor);
    printf("\ntitulo: %s", livros[i].titulo);
    printf("\nEditora: %s", livros[i].editora);
    printf("\nData de publicacao: %d", livros[i].ano_pub);
  }
}
void livroCrescente(Livro livros[], int quantidade_livros){
  int temp = 0;

  for (int i = 0; i < quantidade_livros - 1; i++) {
    for (int j = 0; j < quantidade_livros - i - 1; j++){
      
      if (livros[j].ano_pub < livros[j+1].ano_pub){
        temp = livros[j].ano_pub;
        livros[j].ano_pub = livros[j+1].ano_pub;
        livros[j+1].ano_pub = temp;
      }
    }
  }
  dadosLivros(livros,quantidade_livros);
}
//----------------------------------------------------------------------------------------
// Questao 6 e 7
// Arquivo main.c
#include "funcoes.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  int quantidade_pessoas;

  printf("Digite a quantidade desejada de pessoas: ");
  scanf("%d", &quantidade_pessoas);

  Pessoa pessoas[quantidade_pessoas];

  printf("\n--Digite os dados dos Pessoas--");
  
  for (int i = 0; i < quantidade_pessoas; i++) {
    pessoas[i].nome = (char*)malloc(50 * sizeof(char));
    pessoas[i].genero = (char*)malloc(50 * sizeof(char));
    pessoas[i].profissao = (char*)malloc(50 * sizeof(char));
    
    printf("\n\n%d pessoa:\n", i+1);

    printf("Digite o nome: ");
    scanf("%s", pessoas[i].nome);

    printf("Digite a idade: ");
    scanf("%d", &pessoas[i].idade);

    printf("Digite a profissao: ");
    scanf("%s", pessoas[i].profissao);

    printf("Digite o genero (masculino/feminino/outro): ");
    scanf("%s", pessoas[i].genero);
  }
  
  printf("\n\n---Lista das pessoas---\n");
  dadosPessoas(pessoas,quantidade_pessoas);

  printf("\n\n---Lista dos Homens com mais de 30 Anos---\n");
  mascMaior(pessoas, quantidade_pessoas);
  
  return 0;
}
// Questao 6 e 7
// Arquivo funcoes.h
typedef struct Pessoa {
  char *nome;
  int idade;
  char *genero;
  char *profissao;
} Pessoa;

void dadosPessoas(Pessoa pessoas[], int quantidade_pessoas) {
  for (int i = 0; i < quantidade_pessoas; i++) {

    printf("\n\n--%d pessoa--", i + 1);
    
    printf("\nNome: %s", pessoas[i].nome);
    printf("\nIdade: %d", pessoas[i].idade);
    printf("\nProfissao: %s", pessoas[i].profissao);
    
    switch(strcmp(pessoas[i].genero, "feminino") && strcmp(pessoas[i].genero, "masculino")) {
      case 0:
        printf("\nGenero: %s", pessoas[i].genero);
        break;
      default:
        printf("\nGenero: Outro");
        break;
    }
  }
}
void mascMaior(Pessoa pessoas[], int quantidade_pessoas){

  for (int i = 0; i < quantidade_pessoas; i++) {
    if (pessoas[i].idade > 30){
      switch(strcmp(pessoas[i].genero, "masculino")) {
    
        case 0:
          printf("\nNome: %s", pessoas[i].nome);
          printf("\nIdade: %d", pessoas[i].idade);
          printf("\nProfissao: %s", pessoas[i].profissao);

          printf("\n");
          break;
        default:
          printf("\nNao encontrados..");
          break;
      }
    }
  }
}
//----------------------------------------------------------------------------------------
// Questao 8, 9 e 10
// Arquivo main.c
#include "funcoes.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  int quantidade_veiculos;

  printf("Digite a quantidade desejada de veiculos: ");
  scanf("%d", &quantidade_veiculos);

  Veiculo veiculos[quantidade_veiculos];

  printf("\n--Digite os dados dos Veiculos--");
  
  for (int i = 0; i < quantidade_veiculos; i++) {
    veiculos[i].proprietario = (char*)malloc(50 * sizeof(char));
    veiculos[i].modelo = (char*)malloc(30 * sizeof(char));
    
    printf("\n\n%d pessoa:\n", i+1);

    printf("Digite o nome do proprietario: ");
    scanf("%s", veiculos[i].proprietario);

    printf("Digite o nº do modelo: ");
    scanf("%s", veiculos[i].modelo);

    printf("Digite o nº da placa: ");
    scanf("%d", &veiculos[i].placa);

    printf("Digite o ano de Fabricacao: ");
    scanf("%d", &veiculos[i].ano_fab);
  }
  
  printf("\n\n---Lista dos Veiculos por data---\n");
  fabDate(veiculos, quantidade_veiculos);

  printf("\n\n---Lista dos Veiculos lançados antes de 2010---\n");
  fabAntes(veiculos, quantidade_veiculos);
  
  return 0;
}
// Questao 8, 9 e 10
// Arquivo funcoes.h
typedef struct Veiculo {
  char *proprietario;
  char *modelo;
  int placa;
  int ano_fab;
} Veiculo;

void dadosVeiculos(Veiculo veiculos[], int quantidade_veiculos) {
  for (int i = 0; i < quantidade_veiculos; i++) {

    printf("\n\n--%dº veiculo--", i + 1);

    printf("\nProprietario: %s", veiculos[i].proprietario);
    printf("\nModelo: %s", veiculos[i].modelo);
    printf("\nNº Placa: %d", veiculos[i].placa);
    printf("\nAno de Fabricaçao: %d", veiculos[i].ano_fab);
  }
}
void fabDate(Veiculo veiculos[], int quantidade_veiculos){
  int temp = 0;

  for (int i = 0; i < quantidade_veiculos - 1; i++) {
    for (int j = 0; j < quantidade_veiculos - i - 1; j++){
      if (veiculos[j].ano_fab < veiculos[j+1].ano_fab){
        temp = veiculos[j+1].ano_fab;
        veiculos[j+1].ano_fab = veiculos[j].ano_fab;
        veiculos[j].ano_fab = temp;
      }
    }
  }
  dadosVeiculos(veiculos,quantidade_veiculos);
}
void fabAntes(Veiculo veiculos[], int quantidade_veiculos){

  for (int i = 0; i < quantidade_veiculos; i++) {
    if (veiculos[i].ano_fab < 2010){
    printf("\n\n--%dº veiculo--", i + 1);

    printf("\nProprietario: %s", veiculos[i].proprietario);
    printf("\nModelo: %s", veiculos[i].modelo);
    printf("\nNº Placa: %d", veiculos[i].placa);
    printf("\nAno de Fabricaçao: %d", veiculos[i].ano_fab);
    }
  }
}
