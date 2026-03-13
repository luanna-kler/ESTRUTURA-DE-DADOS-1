#include <stdio.h>

int main() {

    int vet[15];
    int j = 0;

    for(int i = 0; i < 15; i++){
        scanf("%d", &vet[i]);
    }

    for(int i = 0; i < 15; i++){
        if(vet[i] != 0){
            vet[j] = vet[i];
            j++;
        }
    }

    printf("Vetor compactado:\n");
    for(int i = 0; i < j; i++){
        printf("%d ", vet[i]);
    }

    return 0;
}
