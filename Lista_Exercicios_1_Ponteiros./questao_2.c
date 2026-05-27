#include <stdio.h>

// Função para encontrar maior e menor elemento
void encontrarMaiorMenor(int *vet, int tamanho, int *maior, int *menor) {
    int i;

    // Inicializa maior e menor com o primeiro elemento
    *maior = vet[0];
    *menor = vet[0];

    // Percorre o array
    for(i = 1; i < tamanho; i++) {

        // Verifica maior
        if(vet[i] > *maior) {
            *maior = vet[i];
        }

        // Verifica menor
        if(vet[i] < *menor) {
            *menor = vet[i];
        }
    }
}

int main() {
    int numeros[5];
    int i;
    int maior, menor;

    // Leitura dos valores
    printf("Digite 5 numeros:\n");

    for(i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
    }

    encontrarMaiorMenor(numeros, 5, &maior, &menor);

    // Exibição dos resultados
    printf("\nMaior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);

    return 0;
}