#include <stdio.h>

// Função calculadora
void calcular(float a, float b,
              float *soma,
              float *subtracao,
              float *multiplicacao,
              float *divisao) {

    *soma = a + b;
    *subtracao = a - b;
    *multiplicacao = a * b;

    if(b != 0) {
        *divisao = a / b;
    }
    else {
        printf("Divisao por zero nao permitida.\n");
        *divisao = 0;
    }
}

int main() {

    float n1, n2;
    float soma, subtracao, multiplicacao, divisao;

    printf("Digite dois numeros: ");
    scanf("%f %f", &n1, &n2);

    calcular(n1, n2,
             &soma,
             &subtracao,
             &multiplicacao,
             &divisao);

    printf("\nSoma: %.2f\n", soma);
    printf("Subtracao: %.2f\n", subtracao);
    printf("Multiplicacao: %.2f\n", multiplicacao);
    printf("Divisao: %.2f\n", divisao);

    return 0;
}