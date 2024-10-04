#include <stdio.h>
#include <stdlib.h>

/* 1. Faça um programa em C e em C++ que leia um vetor de tamanho 20 do teclado e 
imprima o vetor na tela*/
int main (void){
    int vet[20];

        for(int i = 0; i < 20; i++){ // Pedido
            printf("Digite o %d numero: ", i+1); 
            scanf("%d", &vet[i]);
        }
            printf("vvv Seus numeros sao vvv \n");

        for (int i = 0; i < 20; i++) printf("%d ", vet[i]);

/* 2.Elabore um programa em C que leia um vetor inteiro de tamanho 5 do teclado e imprima
esse vetor invertido. Exemplo: se o vetor lido é [2, 3, 4, 10, 0] então será imprimido na tela
o inverso, ou seja, [0, 10, 4, 3, 2].*/
    int vet[5];

        printf("vvv Digite os 5 numeros vvv\n");
        for(int i = 4; i >= 0; i--){
            scanf("%d", &vet[i]);
        }

        printf("vvv Seus numeros sao vvv \n");
        for(int i = 0; i < 5; i++) printf("%d ", vet[i]);
  
/* 3.Faça um programa em C que leia um vetor inteiro de tamanho 10 e procure no vetor o
maior e o menor elemento. Imprima o resultado.*/
    int vet[10], i;
    int maior = 0, menor = 999;

        for(i = 0; i < 10; i++){
            printf("Digite o %d numero: ", i+1);
            scanf("%d", &vet[i]);

        if (vet[i] < menor) menor = vet[i];
        if (vet[i] > maior) maior = vet[i];
        }
        printf("O maior numero e %d, e o menor e %d.", maior, menor);

/* 4. Elabore um programa em C que tendo o seguinte vetor [23, 10, 45, 0, -9, 7, 89, -4, 2, 102,
14, 0, 36], leia um número inteiro 𝑥 e procure esse número no vetor. Imprima uma
mensagem informando se o número está no vetor.*/
    int vet[] = {23, 10, 45, 0, -9, 7, 89, -4, 2, 102, 14, 0, 36};
    int num, igual = 0, loop = 0;

        printf("Vetor = 23, 10, 45, 0, -9, 7, 89, -4, 2, 102, 14, 0, 36\n\n");

        while(loop < 1){

        printf("Digite um numero e verifique se ele esta no vetor: "); 
        scanf("%d", &num);

        for(int i = 0; i < 13; i++){
            if(vet[i] == num){
                igual ++;
            }
        }
        if(igual > 0){
            printf("\nO numero esta no vetor !");
            loop++;
        }else printf("\nO numero nao esta no vetor \nTente novamente...\n\n");
    }

/*5. Faça um programa que tendo um vetor de 6 posições, leia números inteiros do teclado e
só permita preencher o vetor com números negativos.*/
    int vet[6];
    int i = 0;

        printf("Digite 6 numeros negativos: ");

        while(i < 6){
            scanf("%d", &vet[i]);

            if(vet[i] > 0){
                printf("\nNumero positivo detectado, codigo invalido\nTente novamente...\n\n");
                i = 0;
            }else{
                i++;
            }
        }

/*6. Elabore um código em C que leia um vetor de tamanho 𝑛, ou seja, o tamanho
determinado pelo usuário e preencha esse vetor. Imprima uma mensagem ao usuário
informando se o vetor só contém números pares. Exemplo, se o vetor lido for [2, 4, 8, 2,
10], então a mensagem é positiva, pois o vetor somente possui valores pares. Se o vetor
lido for [2, 10, 13, 1] então a mensagem é negativa.*/
    int num, i = 0, par = 0;

        printf("Digite a quantidade de numeros desejados na lista: ");
        scanf("%d", &num);

        int vet[num];

        while(i < num){
            printf("Digite o %d numero par: ", i+1);
            scanf("%d", &vet[num]);

            if(vet[num]%2 == 0)par++, i++;
                else i++;

        }if(par != num)printf("Numero impar detectado na lista!");
        else printf("O vetor contem somente numeros pares, parabens !");

/*7. Seja o seguinte programa em C++ e responda o que está sendo executado nesse código:

int vetor[5];
for(int i = 0; i < 5; i++){
    cout << "Digite o nº: ";
    cin >> vetor[i];
}for (int i = 0; i < 5; i++){
    if(vetor[i] %2 == 0)
        cout << vetor[i] << " ";
}*/
    printf("7.	O código le um vetor de 5 espaços, depois ele compara se cada numero é par ou não, se for par ele entra no vetor e é mostrado no console, se for impar não acontece nada.");

/*8. Faça um programa que tendo dois vetores de tamanho 5, verifique e informe se os dois
vetores são iguais.*/
    int i = 0, vet[5], vet2[5], igual = 0;

        printf("vvv Digite os primeiros 5 numeros vvv\n");
        while(i < 5){
            scanf("%d", &vet[i]);
            i++;
        }i = 0;

        printf("vvv Digite os outros 5 numeros vvv\n");
        while(i < 5){
            scanf("%d", &vet2[i]);
            i++; 
        }i = 0;

        while(i < 5){
            if(vet[i] == vet2[i]){
                igual++;
            }i++;

        }if(igual == 5)printf("Os vetores digitados sao iguais !");
        else printf("Os vetores digitados sao diferentes.");

/*9. Faça um programa que tendo um vetor de 7 posições, procure pelo maior e pelo menor
 elemento do vetor e apresente o resultado.*/
    int vet[7];
    int maior = 0, menor = 999;

        for(int i = 0; i < 7; i++){
            printf("Digite o %d numero: ", i+1);
            scanf("%d", &vet[i]);

            if(vet[i] < menor) menor = vet[i];
            if(vet[i] > maior) maior = vet[i];
        }
        printf("O maior numero e %d, e o menor e %d.", maior, menor);

/*10. Elabore um algoritmo em C que tendo um vetor de tamanho n, imprima o vetor ordenado
crescentemente. Ex: se o vetor lido for [2, 10, 13, 1] então o vetor ordenado em ordem
crescente é [1, 2, 10, 13]*/
    int num, x, y, temp;

        printf("Digite a quantidade de numeros desejada: ");
        scanf("%d", &num);

        int vet[num];

        for (int i = 0; i < num; i++){
            printf("Digite o %d numero: ", i+1);
            scanf("%d", &vet[i]);
        }
        for (x = 0; x < num - 1; x++) {
            for (y = 0; y < num - 1 - x; y++) {
                if (vet[y] > vet[y + 1]) {
                    temp = vet[y];
                    vet[y] = vet[y + 1];
                    vet[y + 1] = temp;
                }
            }
        }printf("Os numeros ordenados sao: ");
        for (int i = 0; i < num; i++)printf("%d ", vet[i]);

/*11.Faça um programa em C que leia do teclado uma matriz 3 x 5 do teclado e imprima na
tela.*/
    int mat[3][5], l, c;

        printf("vvv Digite sua matriz (3 x 5) abaixo vvv\n");

        for(l = 0; l < 3; l++){
            printf("-----\n");
            for(c = 0; c < 5; c++){
                scanf("%d", &mat[l][c]);
            }
        }printf("-----\n\nvvv Sua matriz [%d] x [%d] vvv\n\n", l, c);

        for(l = 0; l < 3; l++){
            for(c = 0; c < 5; c++){
                printf("|%2d|", mat[l][c]);
            }printf("\n");
        }

/*12. Elabore um código em C que tendo uma matriz 3 x 3, calcule a soma das linhas e das
colunas dessa matriz*/
    int mat[3][3], l, c;
    int sum = 0;

        printf("vvv Digite sua matriz (3 x 3) abaixo vvv\n");

        for(l = 0; l < 3; l++){
            printf("-----\n");
            for(c = 0; c < 3; c++){
                scanf("%d", &mat[l][c]);
            }
        }
        for(l = 0; l < 3; l++){
            for(c = 0; c < 3; c++){
                sum = mat[l][c] + sum;
            }
            printf("-----\n\nSoma das linha %d : %d\n", l+1, sum);
        }for(l = 0; l < 3; l++){
            for(c = 0; c < 3; c++){
                printf("|%2d|", mat[l][c]);
            }printf("\n");
        }

/*13. Tendo uma matriz 4 x 4 lida do teclado, calcule a soma dos elementos da diagonal
principal. Mostre o resultado da soma. Exemplo, na matriz abaixo, o resultado da soma
da diagonal principal é 22.
|10|2 |1 |
|6 |4 |1 |
|0 |2 |8 |*/
    int mat[4][4], l, c;
    int sum = 0;

        printf("vvv Digite sua matriz (4 x 4) abaixo vvv\n");

        for(l = 0; l < 4; l++){
            printf("-----\n");
            for(c = 0; c < 4; c++){
                scanf("%d", &mat[l][c]);
            }
        }
        for(l = 0; l < 4; l++){
            for(c = 0; c < 4; c++){

                if(l == c){
                    sum = mat[l][c] + sum;
                }
            }
        }for(l = 0; l < 4; l++){
            for(c = 0; c < 4; c++){
                printf("|%2d|", mat[l][c]);
            }printf("\n");
        }printf("-----\n\nSoma da diagonal do meio:  %d",sum);

/*14. Seja uma matriz 3 x 3, calcule a soma dos elementos acima da diagonal principal e
soma também os elementos abaixo da diagonal principal. Exemplo, na matriz abaixo, a
soma das células acima da diagonal principal é 6 e abaixo da diagonal principal é 11.
|5 |2 |3 |
|6 |4 |1 |
|3 |2 |8 |*/
    int mat[3][3], l, c;
    int sumTop = 0, sumBot = 0;

        printf("vvv Digite sua matriz (3 x 3) abaixo vvv\n");

        for(l = 0; l < 3; l++){
            printf("-----\n");
            for(c = 0; c < 3; c++){
                scanf("%d", &mat[l][c]);
            }
        }
        for(l = 0; l < 3; l++){
            for(c = 0; c < 3; c++){

                if(l != c){
                    if(l == 0 && c == 1||l == 0 && c == 2 ||l == 1 && c == 2 ){
                        sumTop = mat[l][c] + sumTop;
                    }else sumBot = mat[l][c] + sumBot;
                }
            }
        }for(l = 0; l < 3; l++){
            for(c = 0; c < 3; c++){
                printf("|%2d|", mat[l][c]);
            }printf("\n");
        }
        printf("-----\n\nA soma acima da diagonal e:  %d",sumTop);
        printf("\nA soma abaixo da diagonal e:  %d",sumBot);

/*15. Seja a matriz abaixo, leia um número do teclado e calcule a soma de cada elemento
dessa matriz com o número lido. Apresente a matriz resultante.*/
    int mat[2][3] = {1,2,3,4,5,6};
    int l, c, num = 0;
        printf("vvv Matriz vvv \n\n|1|2|3|\n|4|5|6|\n\n");

        printf("Digite um numero: ");
        scanf("%d", &num);

        printf("\n-- Matriz pre-alteracao --\n");
        for(l = 0; l < 2; l++){
            for(c = 0; c < 3; c++){
                printf("|%d|", mat[l][c]);
            }printf("\n");
        }
        
        printf("\n\n-- Matriz pos-alteracao --\n");
        for(l = 0; l < 2; l++){
            for(c = 0; c < 3; c++){
                printf("|%d|", mat[l][c] + num);
            }printf("\n");
        }
/*16. Faça um programa que tendo uma matriz 2 x 3, leia um número inteiro e faça a busca
desse número na matriz e informe ao usuário se o número foi encontrado.*/
    int mat[2][3] = {1,2,3,4,5,6};
    int l, c, num, counter = 0;

        printf("vvv Matriz vvv \n\n|1|2|3|\n|4|5|6|\n\n");

        printf("Digite um numero: ");
        scanf("%d", &num);

        for(l = 0; l < 2; l++){
            for(c = 0; c < 3; c++){
                if(mat[l][c] == num)counter++;
            }
        }
        if(counter > 0)printf("\nO numero se encontra na matriz!");
        else printf("\nO numero nao se encontra na matriz..");

     return 0;
}
