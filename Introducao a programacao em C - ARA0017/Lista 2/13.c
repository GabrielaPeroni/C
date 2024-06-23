/*13. Crie um algoritmo em C que, dado um número informado pelo usuário, imprima a
tabuada dele de 1 a 10. */
#include <stdio.h>
int main(void){
    float i, a, b;

    printf("digite um numero: ");
    scanf("%f", &a);

    for(i = 1; i <= 10; i++){
        b = a*i;   
        printf("%.1f x %.1f = %.1f\n",a,i,b);
    }
    return 0;
}
