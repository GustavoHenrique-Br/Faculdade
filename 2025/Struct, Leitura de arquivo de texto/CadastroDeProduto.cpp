#include <stdio.h>
#include <string.h>

struct registro {
	int codigo;
	char nome[50];
	int quantidade;
	float preco;
};

int main(){
	int i, n;
	struct registro lista[100];
	
	printf("Quantos produtos deseja cadastrar (maximo 100)?\n");
		scanf("%d",&n);

	for (i = 0; i < n; i++){
		printf("Qual o codigo do produto? (%d)\n", i+1);
			scanf("%d", &lista[i].codigo);
		printf("Qual o nome do produto?\n");
			scanf(" %[^\n]", &lista[i].nome);
		printf("A quantidade em estoque?\n");
			scanf("%d", &lista[i].quantidade);
		printf("Qual o preco?\n");
			scanf("%f", &lista[i].preco);
	}
	
	printf(">> Relatorio do produto <<\n");
	
	for (i = 0; i < n; i++){
		printf(">> Produto %d <<\n", i+1);
		printf("Codigo: %d\n", lista[i].codigo);
		printf("Nome do produto: %s\n", lista[i].nome);
		printf("Quantidade em estoque: %d\n", lista[i].quantidade);
		printf("Preco: %.2f\n", lista[i].preco);
	}
	
}
