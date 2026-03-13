#include <stdio.h>

int main() {

    float vet[15];
    float media,soma=0;

    for(int i = 0; i < 15; i++) {
        scanf("%f", &vet[i]);
        soma+=vet[i];
    }
    
    printf("Media Geral:%f\n", soma/15);
    

    return 0;
}