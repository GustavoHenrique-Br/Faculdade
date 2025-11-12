#include <stdio.h>
#include <stdlib.h>

#define MAX_MATERIAL 30
#define MAX_CLASSE 20
#define MAX_ENSAIOS 100

typedef struct {
    int id;
    char material[MAX_MATERIAL];
    char classe[MAX_CLASSE];
    float densidade_kgm3;
    float resistencia_mpa;
    float modulo_mpa;
} Ensaio;

int main() {
    FILE *entrada, *saida;
    Ensaio ensaios[MAX_ENSAIOS];
    int qtd = 0;

    entrada = fopen("ensaios_saida.txt", "r");
    if (entrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada!\n");
        return 1;
    }

    while (fscanf(entrada, "%s %s %f %f %f",
                  ensaios[qtd].material,
                  ensaios[qtd].classe,
                  &ensaios[qtd].densidade_kgm3,
                  &ensaios[qtd].resistencia_mpa,
                  &ensaios[qtd].modulo_mpa) == 5) {
        ensaios[qtd].id = qtd + 1;
        qtd++;
    }
    fclose(entrada);

    saida = fopen("ensaios_entrada.txt", "w");
    if (saida == NULL) {
        printf("Erro ao criar o arquivo de saída!\n");
        return 1;
    }

    fprintf(saida, "ID Material Classe Densidade(kg/m3) Densidade(g/cm3) Resistência(MPa) Módulo(GPa)\n");

    for (int i = 0; i < qtd; i++) {
        fprintf(saida, "%d %s %s %.2f %.2f %.2f %.2f\n",
                ensaios[i].id,
                ensaios[i].material,
                ensaios[i].classe,
                ensaios[i].densidade_kgm3,
                ensaios[i].densidade_kgm3 / 1000.0,   
                ensaios[i].resistencia_mpa,
                ensaios[i].modulo_mpa / 1000.0        
        );
    }

    fclose(saida);

    printf("Conversao concluida! Arquivo 'ensaios_entrada.txt' gerado.\n");

    return 0;
}
