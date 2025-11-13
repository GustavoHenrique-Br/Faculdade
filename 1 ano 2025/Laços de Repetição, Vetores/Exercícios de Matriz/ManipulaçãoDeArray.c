#include <stdio.h>

int main(){
	
	int N;
	printf("Informe a quantidade de elementos:\n");
		scanf("%d", &N);
	
	int original[N];
	int par[N];
	int impar[N];
	int contPar = 0, contImpar = 0;
	
	for (int i = 0; i < N; i++){
		 printf("Informe o elemento %d: ", i + 1);
        scanf("%d", &original[i]);
    }

    for (int i = 0; i < N; i++) {
        if (original[i] % 2 == 0) {
            par[contPar] = original[i];
            contPar++;
        } else {
            impar[contImpar] = original[i];
            contImpar++;
        }
    }

    printf("\nArray de pares (%d elementos): ", contPar);
    for (int i = 0; i < contPar; i++) {
        printf("%d ", par[i]);
    }

    printf("\nArray de impares (%d elementos): ", contImpar);
    for (int i = 0; i < contImpar; i++) {
        printf("%d ", impar[i]);
    }

    printf("\n");

    return 0;
}
	
