#include <stdio.h>
#include <stdlib.h>

void A() { // Questao 1 //
  int i;
  int vector[10];

  printf("\n\n");

  printf("Digite 10 numeros:\n\n");
  for (i = 0; i < 10; i++) {
    scanf("%d", &vector[i]);
  }
  printf("vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv");

  printf("\n\nOs numeros digitados foram:\n\n");
  for (i = 0; i < 10; i++) {
    printf(" %d -", vector[i]);
  }
}
void B() { // Questao 2 //
  int i;
  float vector[10], vector_quad[10];

  printf("\n\n");

  printf("Digite 10 numeros:\n\n");
  for (i = 0; i < 10; i++) {
    scanf("%f", &vector[i]);

    vector_quad[i] = vector[i] * vector[i];
  }
  printf("vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv");

  printf("\n\nO quadrado dos numeros digitados é:\n\n");
  for (i = 0; i < 10; i++) {
    printf(" %.1f -", vector[i]);
  }
  printf("\n\n");
  for (i = 0; i < 10; i++) {
    printf(" %.1f -", vector_quad[i]);
  }
}
void C() { // Questao 3 //
  int i;
  int par = 0, impar = 0;
  int vector[10];

  printf("\n\n");

  printf("Digite 10 numeros:\n\n");
  for (i = 0; i < 10; i++) {
    scanf("%d", &vector[i]);

    if (vector[i] % 2 == 0) {
      par++;
    } else {
      impar++;
    }
  }
  printf("vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv");

  printf("Quantidade de numeros impar: %d\n\n", impar);
  printf("Quantidade de numeros par: %d", par);
}
void D() { // Questao 4 //
  int i;
  int maior, menor;
  int vector[10];

  printf("\n\n");

  printf("Digite 10 numeros:\n\n");
  for (i = 0; i < 10; i++) {
    scanf("%d", &vector[i]);

    if (vector[i] > vector[i - 1]) {
      maior = vector[i];
    } else {
      menor = vector[i];
    }
  }
  printf("vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv");

  printf("Maior numero digitado: %d\n\n", maior);
  printf("Menor numero digitado: %d", menor);
}
void E() { // Questao 5 //
  int i;
  int maior = 0, index;
  int vector[10];

  printf("\n\n");

  printf("Digite 10 numeros:\n\n");
  for (i = 0; i < 10; i++) {
    scanf("%d", &vector[i]);

    if (vector[i] > maior) {
      maior = vector[i];
      index = i;
    }
  }
  printf("vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv");

  printf("\n\nOs numeros digitados foram:\n\n");
  for (i = 0; i < 10; i++) {
    printf(" %d -", vector[i]);
  }
  printf("\n\n");
  printf("Maior numero digitado é %d e sua posicao é o %d numero", maior,
         index + 1);
}
void F() { // Questao 6 //
  int i;
  float neg = 0, pos = 0;
  float vector[10];

  printf("\n\n");

  printf("Digite 10 numeros:\n\n"); // pedindo input ao invez de digitar
                                    // internamente
  for (i = 0; i < 10; i++) {
    scanf("%f", &vector[i]);

    if (vector[i] >= 0) {
      pos += vector[i];
    } else if (vector[i] < 0) {
      neg++;
    }
  }
  printf("vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv");

  printf("Quantidade de numeros negativos: %.1f\n\n", neg);
  printf("Soma dos numeros positivos digitados: %.1f\n\n", pos);
}
void G() { // Questao 7 //
  int i;
  int mult, vector_mult[10], mult_total = 0;
  int vector[10];

  printf("\n\n");
  printf("Digite o valor do Multiplicador: ");
  scanf("%d", &mult);

  printf("\n");
  printf("Digite 10 numeros:\n\n");
  for (i = 0; i < 10; i++) {
    scanf("%d", &vector[i]);

    if (vector[i] % mult == 0) {
      vector_mult[i] = vector[i];
      mult_total++;
    } else if (vector[i] % mult != 0) {
      vector_mult[i] = 0;
    }
  }
  printf("vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv");

  printf("\n\nLocal dos multiplos de /%d/:\n\n", mult);
  for (i = 0; i < 10; i++) {
    printf(" %d -", vector_mult[i]);
  }
  printf("\n\n");
  printf("Quantidade de multiplos de /%d/ : %d", mult, mult_total);
}
void H() { // Questao 8 //
  int i;
  int vector[10];

  for (i = 0; i < 10; i++) {

    vector[i] = (i + 5 * i) * (i + 1);
  }
  printf("vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv");

  printf("\n\nNumeros da equaçao x = (x + 5)*(x + 1):\n\n");
  for (i = 0; i < 10; i++) {
    printf(" %d -", vector[i]);
  }
}
void I() { // Questao 9 //
  int i;
  int select;
  float vector[5];

  printf("\n\n");

  printf("Digite 5 numeros:\n\n");
  for (i = 0; i < 5; i++) {
    scanf("%f", &vector[i]);
  }
  printf("\n\n");
  printf("Escolha a codigo: ");
  scanf("%d", &select);

  printf("\n\nvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv");

  switch (select) {

  case 1:
    printf("\n\nOs numeros digitados foram:\n\n");
    for (i = 0; i < 5; i++) {
      printf(" %.1f -", vector[i]);
    }
    break;

  case 2:
    printf("\n\nOs numeros digitados foram:\n\n");
    for (i = 5; i > 0; i--) {
      printf(" %.1f -", vector[i - 1]);
    }
    break;

  default:
    printf("Código invalido! Tente novamente..");
    break;
  }
}
void J() { // Questao 10 //
  int i;
  int x = 0, y = 0, num = 0;

  printf("\n\n");
  printf("Defina o tamanho do vetor:\n\n");
  scanf("%d", &x);

  int *vector = (int *)malloc(x * sizeof(int));

  printf("Digite os numeros:\n\n");
  for (i = 0; i < x; i++) {
    scanf("%d", &vector[i]);
  }

  for (i = 0; i < x; i++) {
    for (y = i + 1; y < x; y++) {

      if (vector[i] > vector[y]) {
        num = vector[i];
        vector[i] = vector[y];
        vector[y] = num;
      }
    }
  }
  printf("vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv");

  printf("\n\nOs numeros em ordem crescente:\n\n");
  for (i = 0; i < x; i++) {
    printf(" %d -", vector[i]);
  }
}
void K() { // Questao 11 //
  int i;
  int size, size_check = 1, dist_hamming = 0;

  printf("\n\n");

  printf("Digite a quantidade de numeros (digito unico): ");
  scanf("%d", &size);
  printf("\n\n");

  size_check = size_check * (size * 10);

  int num_1[size];
  int num_2[size];

  printf("Digite o primeiro vetor:\n");
  for (i = 0; i < size; i++) {
    scanf("%d", &num_1[i]);
  }
  printf("\nDigite o segundo vetor:\n");
  for (i = 0; i < size; i++) {
    scanf("%d", &num_2[i]);
  }
  for (i = 0; i < size; i++) {
    if (num_1[i] != num_2[i]) {
      dist_hamming++;
    }
  }
  printf("vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv");

  printf("\n\n");
  printf("Quantidade de numeros diferentes (Distancia de Hamming): %d",
         dist_hamming);
}
void L() { // Questao 12 //
  int x, y;
  int maior = 0;
  int matrix[4][4];

  printf("\n\n");
  printf("Digite os numeros da matiz: \n");

  for (x = 0; x < 4; x++) {
    printf("\n\n");
    for (y = 0; y < 4; y++) {
      scanf("%d", &matrix[x][y]);

      if (matrix[x][y] > 10) {
        maior++;
      }
    }
  }
  for (x = 0; x < 4; x++) {
    printf("\n");
    for (y = 0; y < 4; y++) {
      printf(" %d |", matrix[x][y]);
    }
  }
  printf("vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv");

  printf("Quantidade de numeros maiores que 10: %d", maior);
}
void M() { // Questao 13 //
  int x, y;
  int matrix[5][5];

  printf("\n\n");
  printf("Matriz identidade binaria! \n\n");

  for (x = 0; x < 5; x++) {
    for (y = 0; y < 5; y++) {
      if (x == y) {
        matrix[x][y] = 1;
      } else {
        matrix[x][y] = 0;
      }
    }
  }
  for (x = 0; x < 5; x++) {
    printf("\n");
    for (y = 0; y < 5; y++) {
      printf(" %d |", matrix[x][y]);
    }
  }
}
void N() { // Questao 14 //
  int x, y;
  int maior = 0, index_x, index_y;
  int matrix[4][4];

  printf("\n\n");
  printf("Digite os numeros da matiz: \n");

  for (x = 0; x < 4; x++) {
    printf("\n\n");
    for (y = 0; y < 4; y++) {
      scanf("%d", &matrix[x][y]);

      if (matrix[x][y] > maior) {
        maior = matrix[x][y];
        index_x = x;
        index_y = y;
      }
    }
  }
  for (x = 0; x < 4; x++) {
    printf("\n");
    for (y = 0; y < 4; y++) {
      printf(" %d |", matrix[x][y]);
    }
  }
  printf("vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv");

  printf("\n\n");
  printf("Maior numero digitado é %d !\n\n", maior);
  printf("sua posicao é %d linha e %d coluna;", index_x + 1, index_y + 1);
}
void O() { // Questao 15 //
  int x, y;
  int var_X, index_x = 0, index_y = 0;
  int matrix[3][3];

  printf("\n\n");

  printf("Digite o valor de X: ");
  scanf("%d", &var_X);

  printf("Digite os numeros da matiz:");

  for (x = 0; x < 3; x++) {
    printf("\n\n");
    for (y = 0; y < 3; y++) {
      scanf("%d", &matrix[x][y]);

      if (matrix[x][y] == var_X) {
        index_x = x;
        index_y = y;
      }
    }
  }
  for (x = 0; x < 3; x++) {
    printf("\n");
    for (y = 0; y < 3; y++) {
      printf(" %d |", matrix[x][y]);
    }
  }
  if (index_x != 0 && index_y != 0) {
    printf("vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv");
    printf("\n\n");
    printf("X se encontra na linha %d e coluna %d (unitario)", index_x + 1,
           index_y + 1);
  } else {
    printf("\n\n");
    printf("Nao encontrado;");
  }
}
void P() { // Questao 16 //
  int x, y;
  int matrix_pos[4][4], matrix_neg[4][4];
  int matrix_1[4][4], matrix_2[4][4], matrix_3[4][4] = {{0}};

  printf("\n\n");
  printf("Digite os numeros da primeira matriz: \n\n");
  for (x = 0; x < 4; x++) {
    printf("\n");
    for (y = 0; y < 4; y++) {
      scanf("%d", &matrix_1[x][y]);
    }
  }
  printf("\n\n");
  printf("Digite os numeros da segunda matriz: \n\n");
  for (x = 0; x < 4; x++) {
    printf("\n");
    for (y = 0; y < 4; y++) {
      scanf("%d", &matrix_2[x][y]);
    }
  }
  for (x = 0; x < 4; x++) {
    for (y = 0; y < 4; y++) {
      if (matrix_1[x][y] > matrix_2[x][y]) {
        matrix_3[x][y] = matrix_1[x][y];
      } else {
        matrix_3[x][y] = matrix_2[x][y];
      }
    }
  }
  for (x = 0; x < 4; x++) {
    for (y = 0; y < 4; y++) {
      if (matrix_3[x][y] >= 0) {
        matrix_pos[x][y] = matrix_3[x][y];
        matrix_neg[x][y] = 0;
      } else {
        matrix_neg[x][y] = matrix_3[x][y];
        matrix_pos[x][y] = 0;
      }
    }
  }
  printf("vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv");

  printf("Matriz dos maiores numeros digitados: \n");
  for (x = 0; x < 4; x++) {
    printf("\n");
    for (y = 0; y < 4; y++) {
      printf(" %d |", matrix_3[x][y]);
    }
  }
  printf("\n\n");
  printf("Matriz dos numeros positivos (da matriz dos maiores numeros): \n");
  for (x = 0; x < 4; x++) {
    printf("\n");
    for (y = 0; y < 4; y++) {
      printf(" %d |", matrix_pos[x][y]);
    }
  }
  printf("\n\n");
  printf("Matriz dos numeros negativos (da matriz dos maiores numeros): \n");
  for (x = 0; x < 4; x++) {
    printf("\n");
    for (y = 0; y < 4; y++) {
      printf(" %d |", matrix_neg[x][y]);
    }
  }
}
void Q() { // Questao 17 //
  int x, y;
  int sum_cima = 0, sum_baixo = 0, sum_meio = 0;
  int matrix[3][3];

  printf("\n\n");
  printf("Digite os numeros da matriz: \n\n");
  for (x = 0; x < 3; x++) {
    printf("\n");
    for (y = 0; y < 3; y++) {
      scanf("%d", &matrix[x][y]);

      if (x < y) {
        sum_cima += matrix[x][y];
      }
      if (x == y) {
        sum_meio += matrix[x][y];
      }
      if (x > y) {
        sum_baixo += matrix[x][y];
      }
    }
  }
  printf("vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv");

  for (x = 0; x < 3; x++) {
    printf("\n");
    for (y = 0; y < 3; y++) {
      printf(" %d |", matrix[x][y]);
    }
  }
  printf("\n\n");
  printf("Soma da diagonal de cima: %d; \n\n", sum_cima);
  printf("Soma da diagonal do meio: %d; \n\n", sum_meio);
  printf("Soma da diagonal de baixo: %d;", sum_baixo);
}
void R() { // Questao 18 //
  int x, y;
  int matrix_1[3][3], matrix_2[3][3], matrix_calc[3][3];

  printf("\n\n");
  printf("Digite os numeros da primeira matriz: \n\n");
  for (x = 0; x < 3; x++) {
    printf("\n");
    for (y = 0; y < 3; y++) {
      scanf("%d", &matrix_1[x][y]);
    }
  }
  printf("\n\n");
  printf("Digite os numeros da segunda matriz: \n\n");
  for (x = 0; x < 3; x++) {
    printf("\n");
    for (y = 0; y < 3; y++) {
      scanf("%d", &matrix_2[x][y]);
    }
  }
  for (x = 0; x < 3; x++) {
    for (y = 0; y < 3; y++) {
      matrix_calc[x][y] = matrix_1[x][y] * matrix_2[x][y];
    }
  }
  printf("\n\n");
  printf("vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv");

  for (x = 0; x < 3; x++) {
    printf("\n");
    for (y = 0; y < 3; y++) {
      printf(" %d |", matrix_calc[x][y]);
    }
  }
}
void S() { // Questao 19 //
  int x, y;
  int matrix_1[3][3], matrix_2[3][3], matrix_sum[3][3];
  // Pedi input pra nao precisar preencher a matriz manualmente;
  printf("\n\n");
  printf("Digite os numeros da primeira matriz: \n\n");
  for (x = 0; x < 3; x++) {
    printf("\n");
    for (y = 0; y < 3; y++) {
      scanf("%d", &matrix_1[x][y]);
    }
  }
  printf("\n\n");
  printf("Digite os numeros da segunda matriz: \n\n");
  for (x = 0; x < 3; x++) {
    printf("\n");
    for (y = 0; y < 3; y++) {
      scanf("%d", &matrix_2[x][y]);
    }
  }
  for (x = 0; x < 3; x++) {
    for (y = 0; y < 3; y++) {
      matrix_sum[x][y] = matrix_1[x][y] + matrix_2[x][y];
    }
  }
  printf("\n\n");
  printf("vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv");

  for (x = 0; x < 3; x++) {
    printf("\n");
    for (y = 0; y < 3; y++) {
      printf(" %d |", matrix_sum[x][y]);
    }
  }
}
void T() { // Questao 20 //
  int x, y;
  int matrix[3][3], matrix_TP[3][3];

  printf("\n\n");
  printf("Digite os numeros da matriz: \n\n");
  for (x = 0; x < 3; x++) {
    printf("\n");
    for (y = 0; y < 3; y++) {
      scanf("%d", &matrix[x][y]);
    }
  }
  for (x = 0; x < 3; x++) {
    for (y = 0; y < 3; y++) {
      matrix_TP[y][x] = matrix[x][y];
    }
  }
  printf("\n\n");
  printf("vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv\n\n");

  printf("Matriz antes da troca: \n\n");

  for (x = 0; x < 3; x++) {
    printf("\n");
    for (y = 0; y < 3; y++) {
      printf(" %d |", matrix[x][y]);
    }
  }
  printf("\n\n");
  printf("Matriz depois da troca: \n\n");

  for (x = 0; x < 3; x++) {
    printf("\n");
    for (y = 0; y < 3; y++) {
      printf(" %d |", matrix_TP[x][y]);
    }
  }
}
void U() { // Questao 21 //
  int x, y;
  int matrix[4][4];
  float soma_linha[4] = {0}, soma_coluna[4] = {0};

  printf("\n\n");
  printf("Digite os numeros da matriz: \n\n");
  for (x = 0; x < 4; x++) {
    printf("\n");
    for (y = 0; y < 4; y++) {
      scanf("%d", &matrix[x][y]);
    }
  }
  for (x = 0; x < 4; x++) {
    for (y = 0; y < 4; y++) {
      soma_linha[x] += matrix[x][y];
      soma_coluna[y] += matrix[x][y];
    }
  }
  printf("\n\n");
  printf("vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv\n\n");

  for (x = 0; x < 4; x++) {
    printf("\n");
    for (y = 0; y < 4; y++) {
      printf(" %d |", matrix[x][y]);
    }
  }
  printf("\n\n");
  printf("Media aritmetica das linhas: \n\n");
  for (x = 0; x < 4; x++) {
    printf("%.2f |", soma_linha[x] / 4);
  }

  printf("\n\n");
  printf("Media aritmetica das colunas: \n\n");
  for (y = 0; y < 4; y++) {
    printf("%.2f |", soma_coluna[y] / 4);
  }
}
void V() { // Questao 22 //
  int x, y;
  int matrix[4][14];

  printf("\n\n");
  printf("Matriz gigante 4 x 14 !");

  for (x = 0; x < 4; x++) {
    for (y = 0; y < 14; y++) {
      if (x < y) {
        matrix[x][y] = (2 * x) + (7 * y) - 2;
      }
      else if (x == y) {
        matrix[x][y] = (3 * (x * x)) - 1;
      }
      else if (x > y) {
        matrix[x][y] = (4 * (x * x * x)) - (5 * (y * y)) + 1;
      }
    }
  }
  printf("\n\n");
  printf("vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv\n\n");

  for (x = 0; x < 4; x++) {
    printf("\n");
    for (y = 0; y < 14; y++) {
      printf(" %02d |", matrix[x][y]);
    }
  }
}
void W() { // Questao 23 //
  int x, y;
  int num_x, num_y;

  printf("\n\n");
  printf("== Digite o tamanho da matriz ==\n\n");

  printf("Digite a quantidade de linhas: ");
  scanf("%d", &num_x);
  printf("Digite a quantidade de colunas: ");
  scanf("%d", &num_y);

  int matrix[num_x][num_y];
  int *soma_linha = calloc(num_x, sizeof(int));
  int *soma_coluna = calloc(num_y, sizeof(int));

  printf("\n\n");
  printf("Digite os numeros da matriz: \n\n");
  for (x = 0; x < num_x; x++) {
    printf("\n");
    for (y = 0; y < num_y; y++) {
      scanf("%d", &matrix[x][y]);
    }
  }
  for (x = 0; x < num_x; x++) {
    for (y = 0; y < num_y; y++) {
      soma_linha[x] += matrix[x][y];
      soma_coluna[y] += matrix[x][y];
    }
  }
  printf("\n\n");
  printf("vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv\n\n");

  for (x = 0; x < num_x; x++) {
    printf("\n");
    for (y = 0; y < num_y; y++) {
      printf(" %d |", matrix[x][y]);
    }
  }
  printf("\n\n");
  printf("Soma das linhas: \n\n");
  for (x = 0; x < num_x; x++) {
    printf("%d |", soma_linha[x]);
  }

  printf("\n\n");
  printf("Soma das colunas: \n\n");
  for (y = 0; y < num_y; y++) {
    printf("%d |", soma_coluna[y]);
  }
}
//                                //
// ===== CODIGO DE CALLBACK ===== //
//                                //
int main(void) {
  int numero_questao = 0;

  printf("Escolha a questao: ");
  scanf("%d", &numero_questao);

  switch (numero_questao) {

  case 1:
    A();
    break;

  case 2:
    B();
    break;

  case 3:
    C();
    break;

  case 4:
    D();
    break;

  case 5:
    E();
    break;

  case 6:
    F();
    break;

  case 7:
    G();
    break;

  case 8:
    H();
    break;

  case 9:
    I();
    break;

  case 10:
    J();
    break;

  case 11:
    K();
    break;

  case 12:
    L();
    break;

  case 13:
    M();
    break;

  case 14:
    N();
    break;

  case 15:
    O();
    break;

  case 16:
    P();
    break;

  case 17:
    Q();
    break;

  case 18:
    R();
    break;

  case 19:
    S();
    break;

  case 20:
    T();
    break;

  case 21:
    U();
    break;

  case 22:
    V();
    break;

  case 23:
    W();
    break;
  }
  return 0;
}
