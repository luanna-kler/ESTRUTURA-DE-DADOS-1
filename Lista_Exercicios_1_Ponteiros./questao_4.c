#include <stdio.h>

// Função que dobra o valor da variável
void dobrar(int *num) {
    *num = (*num) * 2;
}

int main() {
    int valor;

    // Leitura do valor
    printf("Digite um numero: ");
    scanf("%d", &valor);

    // Valor antes
    printf("\nAntes de dobrar: %d\n", valor);

    // Chamada da função
    dobrar(&valor);

    // Valor depois
    printf("Depois de dobrar: %d\n", valor);

    return 0;
}