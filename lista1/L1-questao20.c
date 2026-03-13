#include <stdio.h>

int main() {

    int vet[10], pares[10], impares[10];
    int p = 0, im = 0;

    for(int i = 0; i < 10; i++) {
        scanf("%d", &vet[i]);

        if(vet[i] % 2 == 0){
            pares[p] = vet[i];
            p++;
        }else{
            impares[im] = vet[i];
            im++;
        }
    }

    printf("Pares:\n");
    for(int i = 0; i < p; i++){
        printf("%d ", pares[i]);
    }

    printf("\nImpares:\n");
    for(int i = 0; i < im; i++){
        printf("%d ", impares[i]);
    }

    return 0;
}
