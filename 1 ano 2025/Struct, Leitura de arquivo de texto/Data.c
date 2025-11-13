#include <stdio.h>

struct data {
    int dia;
    int ano;
    char cidade[50];
    char mes[20];
};

int main() {
    struct data d;

    printf("Digite a cidade: ");
    scanf(" %[^\n]", d.cidade); 

    printf("Digite o dia: ");
    scanf("%d", &d.dia);

    printf("Digite o mes (por extenso, ex: marco): ");
    scanf(" %[^\n]", d.mes); 

    printf("Digite o ano: ");
    scanf("%d", &d.ano);

    printf("\n%s, %d de %s de %d\n", d.cidade, d.dia, d.mes, d.ano);

    return 0;
}
