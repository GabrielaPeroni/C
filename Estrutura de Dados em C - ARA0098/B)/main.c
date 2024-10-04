#include <stdio.h>
#include <stdlib.h>
#include "data.h"

int main(){

  Data dt, hj;
  
  printf("Informe a data de nascimento (dd/mm/aaaa):\n");
  scanf("%d/%d/%d", &dt.dia, &dt.mes, &dt.ano);

  hj = dataHoje();

  printf("\n\nData de hoje: %.2d/%.2d/%.4d", hj.dia, hj.mes, hj.ano);
  printf("\n\nData de nascimento: %.2d/%.2d/%.4d", dt.dia, dt.mes, dt.ano);

  calculoIDADE(dt, hj);
}
