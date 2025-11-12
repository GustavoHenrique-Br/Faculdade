#include <cstdio>
#include <cmath> 

#define PI 3.14159265358979323846

int main() {
    double angulo, resultado;
    int opcao;

    printf("Digite o valor do angulo: ");
    scanf("%lf", &angulo);

    printf("\nEscolha uma opcao:\n");
    printf("1 - Seno do angulo (radianos)\n");
    printf("2 - Seno do angulo (graus)\n");
    printf("3 - Tangente do angulo (radianos)\n");
    printf("4 - Tangente do angulo (graus)\n");
    printf("Opçao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            resultado = sin(angulo);
            printf("Seno (radianos) = %.6f\n", resultado);
            break;
        
        case 2:
            resultado = sin(angulo * PI / 180);
            printf("Seno (graus) = %.6f\n", resultado);
            break;

        case 3:
            resultado = tan(angulo);
            printf("Tangente (radianos) = %.6f\n", resultado);
            break;

        case 4:
            resultado = tan(angulo * PI / 180);
            printf("Tangente (graus) = %.6f\n", resultado);
            break;

        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}
