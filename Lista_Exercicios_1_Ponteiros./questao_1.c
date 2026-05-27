#include <stdio.h>

// Função para trocar os valores
void trocar(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    // Leitura dos valores
    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de y: ");
    scanf("%d", &y);

    // Mostrando valores antes da troca
    printf("\nAntes da troca:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    // Chamada da função
    trocar(&x, &y);

    // Mostrando valores depois da troca
    printf("\nDepois da troca:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}