#include <stdio.h>

int main() {

    int vet[5];
    int maior, menor;
    int posMaior = 0, posMenor = 0;

    for(int i = 0; i < 5; i++) {
        scanf("%d", &vet[i]);
    }

    maior = vet[0];
    menor = vet[0];

    for(int i = 1; i < 5; i++) {

        if(vet[i] > maior){
            maior = vet[i];
            posMaior = i;
        }

        if(vet[i] < menor){
            menor = vet[i];
            posMenor = i;
        }
    }

    printf("Posicao do maior: %d\n", posMaior);
    printf("Posicao do menor: %d\n", posMenor);

    return 0;
}