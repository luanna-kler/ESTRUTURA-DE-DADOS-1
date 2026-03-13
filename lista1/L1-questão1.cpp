#include <stdio.h>

int main(){
    int vetA[6];
    int soma;
    
    vetA[0]=1;
    vetA[1]=0;
    vetA[2]=5;
    vetA[3]=-2;
    vetA[4]=-5;
    vetA[5]=7;
    
    soma=vetA[0]+vetA[1]+vetA[5];
    printf("%d\n", soma);
    
    vetA[4]=100;
    
    for(int i=0;i<6;i++){
        printf("%d\n",vetA[i]);
    }

    return 0;
}