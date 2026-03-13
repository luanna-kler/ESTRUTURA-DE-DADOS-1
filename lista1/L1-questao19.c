#include <stdio.h>

int main() {

    int vet[10];
    int repetido;

    for(int i = 0; i < 10; i++) {

        do{
            repetido = 0;
            scanf("%d", &vet[i]);

            for(int j = 0; j < i; j++){
                if(vet[i] == vet[j]){
                    repetido = 1;
                    printf("Numero repetido, digite outro:\n");
                    break;
                }
            }

        }while(repetido);
    }

    printf("Vetor final:\n");

    for(int i = 0; i < 10; i++){
        printf("%d ", vet[i]);
    }

    return 0;
}
