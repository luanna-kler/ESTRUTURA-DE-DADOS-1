#include <stdio.h>
#include <ctype.h>

// Função para contar vogais e consoantes
void contarVogaisConsoantes(char *str, int *vogais, int *consoantes) {

    *vogais = 0;
    *consoantes = 0;

    while(*str != '\0') {

        char c = tolower(*str);

        // Verifica se é letra
        if(c >= 'a' && c <= 'z') {

            // Verifica vogal
            if(c == 'a' || c == 'e' || c == 'i' ||
               c == 'o' || c == 'u') {

                (*vogais)++;
            }
            else {
                (*consoantes)++;
            }
        }

        str++;
    }
}

int main() {
    char texto[100];
    int vogais, consoantes;

    printf("Digite uma string: ");
    scanf("%s", texto);

    contarVogaisConsoantes(texto, &vogais, &consoantes);

    printf("Vogais: %d\n", vogais);
    printf("Consoantes: %d\n", consoantes);

    return 0;
}