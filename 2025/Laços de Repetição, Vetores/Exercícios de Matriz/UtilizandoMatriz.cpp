#include <stdio.h>
#include <string.h>

int TAM=200;
int main() {
    char palavra[TAM];
    char frase[TAM];
    char copiaFrase[TAM];
    char *token;
    int encontrada = 0;
    int tamanhoPalavra;

    printf("Digite uma palavra: ");
    fgets(palavra, TAM, stdin);
    palavra[strcspn(palavra, "\n")] = '\0'; 

    printf("Digite uma frase: ");
    fgets(frase, TAM, stdin);
    frase[strcspn(frase, "\n")] = '\0'; 

    strcpy(copiaFrase, frase);

    printf("\nPalavras da frase:\n");

    token = strtok(copiaFrase, " ");
    tamanhoPalavra = strlen(palavra);

    while (token != NULL) {
        printf("%s\n", token);

        if (strcmp(token, palavra) == 0) {
            encontrada = 1;
        }

        token = strtok(NULL, " ");
    }

    if (encontrada) {
        printf("\nA palavra \"%s\" ESTA presente na frase.\n", palavra);
    } else {
        printf("\nA palavra \"%s\" NAO está presente na frase.\n", palavra);
    }

    printf("\nPalavras da frase maiores que \"%s\":\n", palavra);

    strcpy(copiaFrase, frase);
    token = strtok(copiaFrase, " ");

    while (token != NULL) {
        if (strlen(token) > tamanhoPalavra) {
            printf("%s\n", token);
        }
        token = strtok(NULL, " ");
    }

    return 0;
}
