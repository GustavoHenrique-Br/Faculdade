#include <stdio.h>
#include <string.h>

#define LINHAS 5
#define COLUNAS 5
#define TAM 50

int main() {
    char mA[LINHAS][COLUNAS][TAM];
    char palavra[TAM];
    int n, m;
    int i, j;
    int encontrada = 0;

    // Leitura de dimensões válidas
    do {
        printf("Digite o numero de linhas (maximo %d): ", LINHAS);
        scanf("%d", &n);
    } while (n <= 0 || n > LINHAS);

    do {
        printf("Digite o numero de colunas (maximo %d): ", COLUNAS);
        scanf("%d", &m);
    } while (m <= 0 || m > COLUNAS);

    // Limpa o buffer do teclado
    getchar();

    // Leitura da matriz mA
    printf("\nDigite as palavras da matriz (%d x %d):\n", n, m);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("Palavra [%d][%d]: ", i, j);
            fgets(mA[i][j], TAM, stdin);
            mA[i][j][strcspn(mA[i][j], "\n")] = '\0'; // Remove '\n'
        }
    }

    // Leitura da palavra a ser buscada
    printf("\nDigite a palavra a ser buscada: ");
    fgets(palavra, TAM, stdin);
    palavra[strcspn(palavra, "\n")] = '\0'; // Remove '\n'

    // Exibe a matriz por linhas
    printf("\nMatriz de palavras:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%s\t", mA[i][j]);
        }
        printf("\n");
    }

    // Busca pela palavra
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (strcmp(mA[i][j], palavra) == 0) {
                printf("\nA palavra \"%s\" foi encontrada na posicao [%d][%d].\n", palavra, i, j);
                encontrada = 1;
            }
        }
    }

    if (!encontrada) {
        printf("\nA palavra \"%s\" NAO foi encontrada na matriz.\n", palavra);
    }

    return 0;
}
