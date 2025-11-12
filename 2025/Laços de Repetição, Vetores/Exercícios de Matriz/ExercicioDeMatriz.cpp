#include <stdio.h>
#include <string.h>

#define LINHAS 5
#define COLUNAS 8

int main() {
    char mapa[LINHAS][COLUNAS][20];       
    char ocorrencia[LINHAS][COLUNAS][10];  
    int i, j;
    char opcao[10];

    printf("=== Mapeamento das Carteiras ===\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("Digite o nome do aluno na carteira [%d][%d]: ", i, j);
            fgets(mapa[i][j], 20, stdin);
            mapa[i][j][strcspn(mapa[i][j], "\n")] = '\0'; 
        }
    }

    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            strcpy(ocorrencia[i][j], "@");
        }
    }

    printf("\n=== Lancamento das Ocorrencias ===\n");
    printf("Ocorrencias validas: ausente, atrasado, banheiro, cola\n");
    printf("Digite 'fim' para encerrar lançamentos.\n");

    while (1) {
        int l, c;
        printf("\nDigite a linha (0 a 4) ou -1 para encerrar: ");
        scanf("%d", &l);
        if (l == -1) break;

        printf("Digite a coluna (0 a 7): ");
        scanf("%d", &c);
        getchar(); 

        if (l < 0 || l >= LINHAS || c < 0 || c >= COLUNAS) {
            printf("Posicao invalida.\n");
            continue;
        }

        printf("Digite a ocorrencia: ");
        fgets(opcao, 10, stdin);
        opcao[strcspn(opcao, "\n")] = '\0';

        if (strcmp(opcao, "ausente") == 0 || strcmp(opcao, "atrasado") == 0 ||
            strcmp(opcao, "banheiro") == 0 || strcmp(opcao, "cola") == 0) {
            strcpy(ocorrencia[l][c], opcao);
        } else {
            printf("Ocorrencia invalida. Tente novamente.\n");
        }
    }

  const char tipos[4][10] = {"ausente", "atrasado", "banheiro", "cola"};

    int t;

    printf("\n=== RELATORIO FINAL DE OCORRÊNCIAS ===\n");

    for (t = 0; t < 4; t++) {
        printf("\nAlunos com ocorrencia \"%s\":\n", tipos[t]);
        int encontrou = 0;

        for (i = 0; i < LINHAS; i++) {
            for (j = 0; j < COLUNAS; j++) {
                if (strcmp(ocorrencia[i][j], tipos[t]) == 0) {
                    printf("- %s (Carteira [%d][%d])\n", mapa[i][j], i, j);
                    encontrou = 1;
                }
            }
        }

        if (!encontrou) {
            printf("Nenhum aluno com esta ocorrencia.\n");
        }
    }

    return 0;
}
