#include <stdio.h>

int main() {

    int a[5], y[5];
    int soma[5], prod[5];
    
    for(int i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < 5; i++)
        scanf("%d", &y[i]);
    }
    
    for(int i = 0; i < 5; i++){
        soma[i] = a[i] + y[i];
        prod[i] = a[i] * y[i];
    }

    printf("Soma:\n");
    for(int i = 0; i < 5; i++)
        printf("%d ", soma[i]);
    }
    printf("\nProduto:\n");
    for(int i = 0; i < 5; i++)
        printf("%d ", prod[i]);
    }

    printf("\nDiferenca (a - y):\n");
    for(int i = 0; i < 5; i++){
        int existe = 0;
        for(int j = 0; j < 5; j++){
            if(a[i] == y[j]){
                existe = 1;
                break;
            }
        }
        if(!existe){
            printf("%d ", a[i]);
        }    
    }

    printf("\nIntersecao:\n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(a[i] == y[j]){
                printf("%d ", a[i]);
                break;
            }
        }
    }

    printf("\nUniao:\n");
    for(int i = 0; i < 5; i++)
        printf("%d ", a[i]);

    for(int i = 0; i < 5; i++){
        int existe = 0;
        for(int j = 0; j < 5; j++){
            if(y[i] == a[j]){
                existe = 1;
                break;
            }
        }
        if(!existe){
            printf("%d ", y[i]);
        }    
    }

    return 0;
}
