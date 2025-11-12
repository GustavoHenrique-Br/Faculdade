#include <stdio.h>

int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Digite o termo n da sequencia de Fibonacci: ");
    scanf("%d", &n);

    int fn = fibonacci(n);
    printf("F(%d) = %d\n", n, fn);

    if (n < 2) {
        printf("Nao eh possivel calcular a proporcao aurea para n = %d,\n", n);
        printf("pois seria necessario dividir por F(n-1), que eh zero ou inexistente.\n");
    } else {
        int fn1 = fibonacci(n - 1);
        double proporcao = (double) fn / fn1;  

        printf("F(%d) = %d\n", n - 1, fn1);
        printf("Aproximacao da proporção aurea: %.10lf\n", proporcao);
    }

    return 0;
}
