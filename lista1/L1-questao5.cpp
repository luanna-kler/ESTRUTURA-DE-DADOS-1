#include <stdio.h>

int main(){

    int vet[10];
    int cont=0;

    for(int i = 0; i < 10; i++){
        scanf("%d", &vet[i]);
        if(vet[i] %2 == 0){
            cont++;
        }
    }
    
    printf("Quant de num pares: %d", cont);

    return 0;
}
