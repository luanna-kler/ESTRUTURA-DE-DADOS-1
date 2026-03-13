#include <stdio.h>

int main() {

    float vet[15],soma=0;
    int cont=0;

    for(int i = 0; i < 15; i++) {
        scanf("%f", &vet[i]);
        if(vet[i]<0){
            cont++;
        }
        if(vet[i]>=0){
            soma+=vet[i];
        }    
    }
    
    printf("Qtde de num negativos:%d\n", cont);
    printf("Soma dos num positivos:%f\n",soma);
    

    return 0;
}