#include <stdio.h>

int main() {

	int vet[10];
	

	for(int i = 0; i < 10; i++) {
		scanf("%d", &vet[i]);
	}
	
	int maior=vet[0];
	int menor=vet[0];

	for(int i = 1; i < 10; i++) {
		if(vet[i] > maior) {
			maior = vet[i];
		}
		if(vet[i] < menor) {
			menor = vet[i];
		}
	}

	printf("Maior: %d\n", maior);
	printf("Menor: %d\n", menor);

	return 0;
}