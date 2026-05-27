#include <stdio.h>
#include <string.h>

// Função para inverter string
void inverterString(char *str) {

    char *inicio = str;
    char *fim = str + strlen(str) - 1;

    char temp;

    while(inicio < fim) {

        temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        inicio++;
        fim--;
    }
}

int main() {
    char texto[100];

    printf("Digite uma string: ");
    scanf("%s", texto);

    inverterString(texto);

    printf("String invertida: %s\n", texto);

    return 0;
}