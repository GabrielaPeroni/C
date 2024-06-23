/*6. Para doar sangue é necessário ter entre 18 e 67 anos. Faça um aplicativo na linguagem C
que pergunte a idade de uma pessoa e diga se ela pode doar sangue ou não.*/
#include <stdio.h>
int main() {
    int idade, A, B;

    printf("Digite a sua idade: ");
    scanf("%d",&idade);

    if (67>=idade && idade>=18){ 
        printf("Parabens, sua idade te permite doar sangue !");}
    else{ 
        printf("Desculpa, sua idade nao te permite doar sangue...");}
    return 0;
}
