/*9. Faça um algoritmo para ler dois números inteiros e informar se estes são iguais ou
diferentes.*/
#include <stdio.h>
int main() {
    int N1,N2;

    printf("Digite o primeiro numero: ");
    scanf("%d",&N1);

    printf("Digite o segundo numero: ");
    scanf("%d",&N2);

    if (N1==N2){ 
        printf("%d e igual a %d !", N1, N2);}
    else{
        printf("%d e diferente de %d !", N2, N1);}
  return 0;
}
