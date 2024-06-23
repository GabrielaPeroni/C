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
