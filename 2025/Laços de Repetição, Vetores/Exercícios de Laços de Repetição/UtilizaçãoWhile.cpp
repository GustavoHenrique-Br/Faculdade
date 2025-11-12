#include <stdio.h>

int main(){
	
	
	int numeroAtual, numeroAnterior, proximoNumero;
		numeroAtual = 1;
		numeroAnterior = 0;
	char resposta = 's';
	
	printf("%d %d\n", numeroAnterior, numeroAtual);
	
	while (resposta == 's'|| 'S'){
		proximoNumero = numeroAnterior + numeroAtual;
		printf(" %d\n", proximoNumero);
		
		numeroAnterior = numeroAtual;
		numeroAtual = proximoNumero;
		
		printf("Deseja continuar? (S/N)\n");
			scanf(" %c", &resposta);
		
		
	}
		return 0;
}