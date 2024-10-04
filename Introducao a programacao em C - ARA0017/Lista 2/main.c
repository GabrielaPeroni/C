/*1. Ler um valor e escrever a mensagem “É MAIOR QUE 20!” se o valor lido for maior que
20, caso contrário escrever “NÃO É MAIOR QUE 20!”.*/
#include <stdio.h>

int main() {
    int valor;

    printf("Digite um numero: ");
    scanf("%d",&valor);

    if (valor>20){
        printf("E MAIOR QUE 20!");}
    else{ 
        printf(" NAO E MAIOR QUE 20!");}
    return 0;
}
/*2. Escreva um programa em C que recebe um inteiro e diga se é par ou ímpar.*/
#include <stdio.h>
int main() {
    int A;

    printf("Digite um numero: ");
    scanf("%d",&A);

    if (A%2 == 0){ 
        printf("%d e par", A);}
    else{ 
        printf("%d e impar", A);}
    return 0;
}
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
/*5. Faça um programa que peça dois números ao usuário e mostre qual o maior e qual o
menor.*/
#include <stdio.h>
int main() {
    int N1,N2;

    printf("Digite o primeiro numero: ");
    scanf("%d",&N1);

    printf("Digite o segundo numero: ");
    scanf("%d",&N2);

    if (N1>N2){ 
        printf("%d e maior que %d !", N1, N2);}
    else if (N1<N2){
        printf("%d e maior que %d !", N2, N1);}
    else{ 
        printf("%d e igual a %d !", N2, N1);}
    return 0;
}
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
/*8. Escreva um algoritmo em linguagem C que leia o código de um determinado produto e
apresente a sua classificação de acordo com a tabela abaixo:
1        - Alimento nao perecivel
2,3 ou 4 - Alimento perecivel
5 ou 6   - Vestuario
7 ate 12 - Limpeza
outro    - Opcao invalida*/
#include <stdio.h>
int main() {
    int code;

    printf("Digite o codigo: ");
    scanf("%d",&code);

    if (code == 1){ 
        printf("Alimento não perecivel");}
    else if (4>=code && code>=2){ 
        printf("Alimento perecivel");}
    else if (6>=code && code>=5){ 
        printf("Vestuario");}
    else if (12>=code && code>=7){ 
        printf("Limpeza");}
    else{
        printf("Opcao invalida");}
  return 0;
}
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
/*10. Desenvolva um algoritmo que leia o valor de uma determinada compra e o código da
forma de pagamento. Com base neste código, o pseudocódigo deverá calcular e
imprimir o valor a pagar, a forma de pagamento e o valor de cada parcela, se for o caso.
1     - A vista, com 8% de desconto
2     - A vista no cartao, 4% de desconto
3     - Em 2x, preço normal sem juros
4     - Em 4x, preco acrescido de 8%
outro - Opcao invalida*/
 #include <stdio.h>
int main() {
    int code;
    float valor, a, b, c, d;

    printf("Digite o valor a ser pago: ");
    scanf("%f",&valor);

    printf("Digite o codigo: ");
    scanf("%d",&code);

    if (code == 1){ 
        a = valor - (valor*0.8);
        printf("Total e %.2f, A vista com 8%% de desconto", a);}
    else if (code == 2){ 
        b = valor - (valor*0.4);
        printf("Total e %.2f, A vista no cartao, com 4%% de desconto", b);}
    else if (code == 3){ 
        c = (valor/2);
        printf("Total e %.2f, Em 2x sem juros", c);}
    else if (code == 4){ 
        d =  (valor/4 + (valor * 0.08));
        printf("Total e %.2f, Em 4x com acrescimo de 8%%", d);}
    else{
        printf("Opcao invalida");}
    return 0;
}
/*11. Faça um programa em C que imprima de 1 a 50 na tela.*/
#include <stdio.h>
int main(void){
    int i = 0;

    for(i = 1; i<=50; i++){
        printf("%d ",i);
    }
    return 0;
}
/*12. Elabore um código que imprima uma sequência de 1 até 100 somente com os números
pares dessa sequência.*/
#include <stdio.h>
int main(void){
    int i = 0;

    for(i = 1; i<=100; i++){
        if (i %2 == 0){
            printf("%d ",i);
        }
    }
    return 0;
}
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
/*14. Desenvolva um programa em C que imprima os números ímpares entre 1 e 100.*/
#include <stdio.h>
int main(void){
    int i = 0;

    for(i = 1; i<=100; i++){
        if (i %2 == 1){
            printf("%d ",i);
        }
    }
    return 0;
}
/*15. Faça um algoritmo em C que imprima na tela os múltiplos de 5 entre 1 e 100.*/
#include <stdio.h>
int main(void){
    int i = 0;

    for(i = 1; i<=100; i++){
        if (i %5 == 0){
        printf("%d ",i);
        }
    }
    return 0;
}
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
/*17. Faça um programa que leia 10 números e calcule: a soma desses números, a média
desses números e o maior e o menor número.*/
#include <stdio.h>
int main(void){
    float i , a, maior=0, menor=1000, soma=0, media;

    for(i = 1; i<=10; i++){
        printf("digite um numero: ");
        scanf("%f",&a);
        soma = soma + a;

        if (a <= menor){
            menor = a;}
        if (a >= maior){
            maior = a;
        }
    }
    media = soma/10;
    printf("a soma dos numeros é %.2f\na media dos numeros é %.2f\no maior numero e %.2f\no menor numero e %.2f\n", soma, media, maior, menor);
    return 0;
}
/*18. Faça um algoritmo que calcule o fatorial de um número 𝑛 informado pelo usuário.
O fatorial de um número é calculado pela multiplicação desse número por todos os seus
antecessores até chegar ao número 1.*/
#include <stdio.h>
int main(void){
    int n, i, final=1;

    printf("digite um numero: ");
    scanf("%d", &n);

    for (i = 1; i<=n; i++){
    final = final*i;
    }

    printf("o fatorial de %d e %d", n, final);
    return 0;
}
