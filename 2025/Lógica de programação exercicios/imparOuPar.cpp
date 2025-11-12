#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite o primeiro numero (a): ");
    scanf("%d", &a);

    printf("Digite o segundo numero (b): ");
    scanf("%d", &b);

    c = a + b;

    printf("A soma de %d + %d = %d\n", a, b, c);

    if (c % 2 == 0) {
        printf("A soma e par.\n");
    } else {
        printf("A soma e impar.\n");
    }

    return 0;
}
