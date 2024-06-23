/*7. Desenvolva um algoritmo em C para ler o nome e a idade de um indivíduo e imprimir
“criança”, se a idade for menor ou igual a 13 anos, “adolescente”, no caso de idade estar
entre 13 e 20 anos, e “adulto”, se for mais velho.*/
#include <stdio.h>
int main() {
    int idade;
    char nome [20];

    printf("Digite a seu nome: ");
    scanf("%s",nome);

    printf("Digite a sua idade: ");
    scanf("%d",&idade);

    if (idade<=13){ 
        printf("Parabens %s, voce e uma crianca !", nome);}
    else if (idade>= 13 && idade<=20){ 
        printf("Parabens %s, voce e um adolescente !", nome);}
    else{
        printf("Parabens %s, voce e um adulto !", nome);}
    return 0;
}
