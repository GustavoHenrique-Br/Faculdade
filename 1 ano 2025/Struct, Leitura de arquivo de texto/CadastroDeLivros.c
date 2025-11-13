#include <stdio.h>
#include <string.h>

#define TAM 100

struct Livro {
	int codigo;
	char titulo[TAM];
	char autor[TAM];
	char area[TAM];
	int ano;
	char editora[TAM];
};

int main(){
	int n,i;
	int opcao, buscaCodigo, buscaAno, encontrado = 0;
	char buscaTitulo[TAM], buscaAutor[TAM], buscaArea[TAM], buscaEditora[TAM];
	char continuar;

	printf("Quantos livros deseja cadastrar? \n");
		scanf("%d", &n);
		
	struct Livro lista[n];
	for (i = 0; i < n; i++){
		printf("Insira os dados do livro (%d): \n", i+1);
		printf("Qual o codigo: \n");
			scanf("%d", &lista[i].codigo);
		printf("Qual eh o titulo: \n");
			scanf(" %[^\n]", &lista[i].titulo);
		printf("Qual eh o autor(a): \n");
			scanf(" %[^\n]", &lista[i].autor);
		printf("Qual eh a area: \n");
			scanf(" %[^\n]", &lista[i].area);
		printf("Qual eh o ano: \n");
			scanf("%d", &lista[i].ano);
		printf("Qual a editora: \n");
			scanf(" %[^\n]", &lista[i].editora);
	}
	
	printf("----------Relatorio dos livro cadastrados----------\n");
	
	for (i = 0; i < n; i++){
		
		printf("Livro %d \n", i+1);
		printf("Codigo: %d\n", lista[i].codigo);
		printf("Titulo: %s\n", lista[i].titulo);
		printf("Autor: %s\n", lista[i].autor);
		printf("Area: %s\n", lista[i].area);
		printf("Ano: %d\n", lista[i].ano);
		printf("Editora: %s\n", lista[i].editora);
	}
	do {
		encontrado = 0;
	printf("Escolha o tipo de busca:\n");
	printf("1 - Buscar por codigo\n");
	printf("2 - Buscar por titulo\n");
	printf("3 - Buscar por autor\n");
	printf("4 - Buscar por area\n");
	printf("5 - Buscar por ano\n");	
	printf("6 - Buscar por editora\n");
		scanf("%d", &opcao);
		
	switch(opcao) {
		case 1:
			printf("Digite o codigo do livro: \n");
				scanf("%d", &buscaCodigo);
			for(i = 0; i < n; i++){
				if(lista[i].codigo == buscaCodigo){
					printf(">> Codigo Encontrado <<\n");
					printf("Codigo: %d | Titulo: %s | Autor: %s | Area: %s | Ano: %d | Editora: %s",lista[i].codigo, lista[i].titulo, lista[i].autor, lista[i].area, lista[i].ano, lista[i].editora);
					encontrado = 1;
					break;
				} 
			}
				if (!encontrado) printf("\n Codigo nao cadastrado");
				break;
				
		case 2:
			printf("Digite o nome do livro: \n");
				scanf(" %[^\n]", &buscaTitulo);
			for(i = 0; i < n; i++){
				if (strcmp(lista[i].titulo, buscaTitulo) == 0){
					printf(">> Titulo encontrado <<\n");
					printf("Codigo: %d | Titulo: %s | Autor: %s | Area: %s | Ano: %d | Editora: %s",lista[i].codigo, lista[i].titulo, lista[i].autor, lista[i].area, lista[i].ano, lista[i].editora);
						encontrado = 1;
						break;			
				} 
			}
				if (!encontrado) printf("\n Titulo nao cadastrado");
				break;		
			
		case 3:
			printf("Digite o autor: \n");
				scanf(" %[^\n]", &buscaAutor);
			for(i = 0; i < n; i++){
				if (strcmp(lista[i].autor, buscaAutor) == 0){
					printf(">> Autor encontrado <<\n");
					printf("Codigo: %d | Titulo: %s | Autor: %s | Area: %s | Ano: %d | Editora: %s",lista[i].codigo, lista[i].titulo, lista[i].autor, lista[i].area, lista[i].ano, lista[i].editora);
						encontrado = 1;
						break;
				}
			}
				if (!encontrado) printf("\n Autor nao cadastrado");
					break;		
			
		case 4:
			printf("Digite a area: \n");
				scanf(" %[^\n]", &buscaArea);
			for(i = 0; i < n; i++){
				if (strcmp(lista[i].area, buscaArea) == 0){
					printf(">> Area encontrada <<\n");
					printf("Codigo: %d | Titulo: %s | Autor: %s | Area: %s | Ano: %d | Editora: %s",lista[i].codigo, lista[i].titulo, lista[i].autor, lista[i].area, lista[i].ano, lista[i].editora);
						encontrado = 1;
						break;
				} 
			}
					if (!encontrado) printf("\n Area nao cadastrado");
					break;		
				
		case 5:
			printf("Digite o ano: \n");
				scanf("%d", &buscaAno);
			for(i = 0; i < n; i++){
				if(lista[i].ano == buscaAno){
				printf(">> Ano encontrada <<\n");
					printf("Codigo: %d | Titulo: %s | Autor: %s | Area: %s | Ano: %d | Editora: %s",lista[i].codigo, lista[i].titulo, lista[i].autor, lista[i].area, lista[i].ano, lista[i].editora);
						encontrado = 1;
						break;	
				}
			}
				if (!encontrado) printf("\n Ano nao cadastrado");
					break;
				
		case 6:
			printf("Digite a editora: \n");
				scanf(" %[^\n]", buscaEditora);
			for(i = 0; i < n; i++){
				if (strcmp(lista[i].editora, buscaEditora) == 0){
					printf(">> Editora encontrada <<\n");
					printf("Codigo: %d | Titulo: %s | Autor: %s | Area: %s | Ano: %d | Editora: %s",lista[i].codigo, lista[i].titulo, lista[i].autor, lista[i].area, lista[i].ano, lista[i].editora);
						encontrado = 1;
						break;
					}
				}
					if (!encontrado) printf("\n Editora nao cadastrado");
					break;
						
		default:
			printf("Opcao invalida!\n");
		}
		printf("\nDeseja realizar outra busca? (s/n): ");
			scanf(" %c", &continuar);
	} while (continuar == 's' || continuar == 'S');
		printf("\nPrograma encerrado.\n");


return 0;
}
	
