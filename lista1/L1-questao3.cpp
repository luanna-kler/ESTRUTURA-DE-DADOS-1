#include <stdio.h>
#include <math.h>

int main(){

    float A[10], B[10];

    for(int i = 0; i < 10; i++){
        scanf("%f", &A[i]);
        B[i] = pow(A[i], 2);
    }

    for(int i = 0; i < 10; i++){
        printf("%.2f\n", B[i]);
    }

    return 0;
}