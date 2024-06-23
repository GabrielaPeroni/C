/*5.Tendo uma matriz 4 x 4 lida do teclado, calcule a soma dos elementos da diagonal
principal. Mostre o resultado da soma. Exemplo, na matriz abaixo, o resultado da soma
da diagonal principal é 22.
|10|2 |1 |
|6 |4 |1 |
|0 |2 |8 |*/
#include <stdio.h>
#include <stdlib.h>

int main(){
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
    return 0;
}
