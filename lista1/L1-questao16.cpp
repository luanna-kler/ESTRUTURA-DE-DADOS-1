#include <stdio.h>

int main() {

    int A[10], B[10], U[20];
    int k = 0, existe;

    for(int i = 0; i < 10; i++)
        scanf("%d", &A[i]);

    for(int i = 0; i < 10; i++)
        scanf("%d", &B[i]);

    for(int i = 0; i < 10; i++){
        U[k] = A[i];
        k++;
    }

    for(int i = 0; i < 10; i++){

        existe = 0;

        for(int j = 0; j < k; j++){
            if(B[i] == U[j]){
                existe = 1;
                break;
            }
        }

        if(!existe){
            U[k] = B[i];
            k++;
        }
    }

    printf("Uniao:\n");

    for(int i = 0; i < k; i++){
        printf("%d ", U[i]);
    }

    return 0;
}