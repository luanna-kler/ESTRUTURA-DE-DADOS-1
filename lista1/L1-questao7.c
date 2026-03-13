#include <stdio.h>

int main() {

	int vet[10];
	int pos;

	for(int i = 0; i < 10; i++) {
		scanf("%d", &vet[i]);
	}
	
	int maior=vet[0];

	for(int i = 1; i < 10; i++) {
		if(vet[i] > maior) {
			maior = vet[i];
			pos=i;
		}

	}

	printf("Maior: %d\n", maior);
	printf("Posicao: %d\n",pos);

	return 0;
}