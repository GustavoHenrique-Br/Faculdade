#include <stdio.h>
#include <string.h>

float lerPositivo(char mensagem[]);
float calcularEscoamento(float forca, float area);
void classificarMaterial(float sigma, char classificacao[]);
void gerarRelatorio(char nome[], float forca, float area, float sigma, char classificacao[]);

int main(){
	char nome[50];
	float forca, area, sigma;
	char classificacao[30];
	char opcao;
	do {
		printf("\n--- Ensaio de Tracao ---\n");
		printf("Nome do Material: "); scanf(" %[^\n]", nome);
		forca = lerPositivo("Forca aplicada (N): ");
		area = lerPositivo("Area da secao transversal (mm2): ");
		sigma = calcularEscoamento(forca, area);
		classificarMaterial(sigma, classificacao);
		gerarRelatorio(nome, forca, area, sigma, classificacao);
		
		printf("\n Deseja analisar outro material? (S/N): ");
		scanf(" %c", &opcao);
	} while (opcao == 'S' || opcao == 's');
		printf("\n Programa encerrado.\n");
		return 0;
}

float lerPositivo(char mensagem[]){
	float valorLido;
	do {
		printf("%s", mensagem);
			scanf("%f", &valorLido);
		if (valorLido <= 0)
			printf("Valor invalido! O valor deve ser maior que 0\n");
	}	while (valorLido <=0);
		return valorLido;
	}


float calcularEscoamento(float forca, float area){
	return forca / area;
}

void classificarMaterial(float sigma, char classificacao[]){
	if (sigma < 200)
		strcpy(classificacao, "Material de baixa resistencia\n");
	 else if (sigma >= 200 &&  sigma < 400)
		strcpy(classificacao, "Resistencia media");
	 else if (sigma >= 400 && sigma < 800)
		strcpy(classificacao, "Alta resistencia\n");
	 else
		strcpy(classificacao, "Material de altissima resistencia\n");
	
}

void gerarRelatorio(char nome[], float forca, float area, float sigma, char classificacao[]){
	printf("---> Relatorio do Limite de Escoamento de materiais <---");
	printf("Nome do material: %s\n", nome);
	printf("Forca aplicada: %.2f\n", forca);
	printf("Area da secao: %.2f\n", area);
	printf("Limite de escoamento: %.2f\n", sigma);
	printf("Classificacao: %s", classificacao);
	printf("---------------------------------------------------------\n");
}
