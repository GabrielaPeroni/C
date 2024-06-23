/*16. Desenvolva um código em C que calcule a média aritmética entre 1 e 20.*/
#include <stdio.h>
int main(void){
    float i = 0, soma=0, final;

    for(i = 1; i<=20; i++){
        soma = soma + i;
    }
    final = soma/20;
    printf("a media aritmetica entre 1 e 20 e %.1f", final);
    return 0;
}
