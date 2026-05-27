#include <stdio.h>

// Função para copiar string
void copiarString(char *origem, char *destino) {

    while(*origem != '\0') {
        *destino = *origem;

        origem++;
        destino++;
    }

    // Final da string
    *destino = '\0';
}

int main() {
    char str1[100];
    char str2[100];

    printf("Digite uma string: ");
    scanf("%s", str1);

    copiarString(str1, str2);

    printf("String copiada: %s\n", str2);

    return 0;
}