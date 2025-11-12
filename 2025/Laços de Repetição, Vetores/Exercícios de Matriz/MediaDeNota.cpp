#include <stdio.h>

#define MAX_ALUNOS 50
#define MAX_NOME 50
#define DISCIPLINAS 5
#define BIMESTRES 2

int main() {
    int N;
    char nomes[MAX_ALUNOS][MAX_NOME];
    float notas[MAX_ALUNOS][DISCIPLINAS][BIMESTRES];
    float mediasAlunos[MAX_ALUNOS][DISCIPLINAS];
    float mediaDisciplinas[DISCIPLINAS] = {0};
    float somaDisciplinas[DISCIPLINAS] = {0};
    int i, j, k;

    char disciplinas[DISCIPLINAS][30] = {
        "Calculo I",
        "Fisica I",
        "Algoritmos",
        "Desenho Tecnico",
        "Fund. Matematica"
    };

    printf("Informe o numero de alunos: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        printf("\nNome do aluno %d: ", i + 1);
        scanf(" %[^\n]", nomes[i]);  

        for (j = 0; j < DISCIPLINAS; j++) {
            for (k = 0; k < BIMESTRES; k++) {
                printf("Nota %d de %s: ", k + 1, disciplinas[j]);
                scanf("%f", &notas[i][j][k]);
            }
        }
    }


    for (i = 0; i < N; i++) {
        for (j = 0; j < DISCIPLINAS; j++) {
            float soma = 0;
            for (k = 0; k < BIMESTRES; k++) {
                soma += notas[i][j][k];
            }
            mediasAlunos[i][j] = soma / BIMESTRES;
            somaDisciplinas[j] += mediasAlunos[i][j];
        }
    }

    
    for (j = 0; j < DISCIPLINAS; j++) {
        mediaDisciplinas[j] = somaDisciplinas[j] / N;
    }

    printf("\n\n=== RELATORIO FINAL ===\n");
    for (i = 0; i < N; i++) {
        printf("\nAluno: %s\n", nomes[i]);
        for (j = 0; j < DISCIPLINAS; j++) {
            float falta = 6.0 - mediasAlunos[i][j];
            if (falta < 0) falta = 0;
            printf("%-20s Media: %.2f | Faltam: %.2f pontos\n",
                   disciplinas[j], mediasAlunos[i][j], falta);
        }
    }

    printf("\n=== MEDIA POR DISCIPLINA ===\n");
    for (j = 0; j < DISCIPLINAS; j++) {
        printf("%-20s Media: %.2f\n", disciplinas[j], mediaDisciplinas[j]);
    }

    return 0;
}
