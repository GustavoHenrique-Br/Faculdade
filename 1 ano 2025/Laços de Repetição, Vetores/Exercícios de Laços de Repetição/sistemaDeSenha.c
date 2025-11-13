#include <stdio.h>

int main() {
    int codigoSecreto = 631738;
    int senhaDigitada;

    printf("=== SISTEMA DE CONTROLE DE ACESSO ===\n");

    do {
        printf("Digite a senha de 6 digitos: ");
        scanf("%d", &senhaDigitada);

        if (senhaDigitada != codigoSecreto) {
            printf("Acesso negado. Tente novamente.\n");
        }

    } while (senhaDigitada != codigoSecreto);

    printf("Acesso autorizado. Bem-vindo!\n");

    return 0;
}
