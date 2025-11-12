#include <stdio.h>
int main(){
	
	int primeiroTermo, razao, n; 
		printf("Digite o termo inicial:\n");
			scanf("%d", &primeiroTermo);
		printf("Digite a razao:\n");
			scanf("%d", &razao);
		printf("Digite quantos termos voce deseja ver:\n");
			scanf("%d", &n);
	
    printf("Os %d primeiros termos da PA sao:\n", n);
    
    int termoAtual = primeiroTermo;
    for (int i = 0; i < n; i++) {
        printf("%d ", termoAtual);
        termoAtual += razao;
    }

    printf("\n");

}
