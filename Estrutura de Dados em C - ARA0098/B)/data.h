#include <time.h>

typedef struct {
  int dia;
  int mes;
  int ano;
}Data;

 Data dataHoje(void){
  Data data;
  int sum;

  time_t tempo;
  struct tm *hj;
  tempo = time(NULL);
  hj = localtime(&tempo);

  data.dia = hj -> tm_mday;
  data.mes = hj -> tm_mon + 1;
  data.ano = hj -> tm_year + 1900;

  return(data);
}

void calculoIDADE(Data dataNasc, Data dataAtual){
  int idade;
  
  idade = dataAtual.ano - dataNasc.ano;

    if (dataAtual.mes < dataNasc.mes || dataAtual.dia < dataNasc.dia){
      idade--;
    }
    printf("\n\nIdade do usuario: %d", idade);
}
