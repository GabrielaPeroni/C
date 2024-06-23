/*3. Ler um valor e escrever se é positivo ou negativo (considere o valor zero como positivo).*/ 
#include <stdio.h>
int main() {
    int valor;

    printf("Digite um numero: ");
    scanf("%d",&valor);

    if (valor>= 0){ 
        printf("%d e positivo", valor);}
    else{ 
        printf("%d e negativo", valor);}
    return 0;
}
