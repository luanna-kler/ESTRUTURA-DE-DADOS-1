#include <stdio.h>

int main() {

    int A[10], B[10], I[10];
    int k = 0, existe;

    for(int i = 0; i < 10; i++)
        scanf("%d", &A[i]);

    for(int i = 0; i < 10; i++)
        scanf("%d", &B[i]);

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(A[i] == B[j]){
                existe = 0;
                for(int t = 0; t < k; t++){
                    if(I[t] == A[i]){
                        existe = 1;
                        break;
                    }
                }
                if(!existe){
                    I[k] = A[i];
                    k++;
                }
            }
        }
    }

    printf("Interseccao:\n");

    for(int i = 0; i < k; i++){
        printf("%d ", I[i]);
    }

    return 0;
}