#include <stdio.h>

int main(){

    int vet[8];
    int x,y;

    for(int i = 0; i < 8; i++){
        scanf("%d", &vet[i]);
    }
    
    scanf("%d %d", &x,&y);

    printf("%d\n", vet[x]+vet[y]);
    
    return 0;
}
