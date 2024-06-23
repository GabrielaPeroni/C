/*4. Ler as notas da 1ª e 2ª avaliações de um aluno. Calcular a média aritmética simples e
escrever uma mensagem que diga se o aluno foi ou não aprovado (considerar que nota
igual ou maior que 6 o aluno é aprovado). Escrever também a média calculada. */
#include <stdio.h>
int main() {
    int N1,N2, media;

    printf("Digite a primeira nota: ");
    scanf("%d",&N1);

    printf("Digite a segunda nota: ");
    scanf("%d",&N2);

    media = (N1 + N2)/2;

    if (media>= 6){ 
        printf("Voce tirou %d e foi aprovado !", media);}
    else{ 
        printf("Voce tirou %d e foi reprovado...", media);}
    return 0;
}
