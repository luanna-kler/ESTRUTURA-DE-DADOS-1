#include <stdio.h>

int main() {

    int vet[6];

    for(int i = 0; i < 6; i++) {
        do{
            scanf("%d", &vet[i]);
        }while(vet[i] % 2 != 0);
    }

    for(int i = 5; i >= 0; i--) {
        printf("%d\n", vet[i]);
    }

    return 0;
}