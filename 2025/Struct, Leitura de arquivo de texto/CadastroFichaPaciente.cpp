#include <stdio.h>

struct FichaPaciente {
	int codigo;
	char paciente[50];
	int idade;
	float altura;
	float peso;
	float imc;
};


int main(){
	
	int i, n;
	
	printf("Qual o numero de pacientes?\n");
		scanf("%d", &n);
		
	struct FichaPaciente fichaPacientes[n];
	
	for(i = 0; i < n; i++){
		printf("Qual o codigo do paciente?\n");
			scanf("%d", &fichaPacientes[i].codigo);
		printf("Qual o nome do paciente?\n");
			scanf(" %[^\n]", fichaPacientes[i].paciente);
		printf("Qual a idade?\n");
			scanf("%d", &fichaPacientes[i].idade);
		printf("Qual a altura?\n");
			scanf("%f", &fichaPacientes[i].altura);
		printf("Qual o peso?\n");
			scanf("%f", &fichaPacientes[i].peso);
			
		fichaPacientes[i].imc = fichaPacientes[i].peso/(fichaPacientes[i].altura * fichaPacientes[i].altura);
	}
	
	printf(">> Relatorio dos pacientes <<\n");
	
	
	for (i = 0; i < n; i++){
		printf("Nome paciente (%d) %s\n", i+1, fichaPacientes[i].paciente);
		printf("Idade: %d\n", fichaPacientes[i].idade);
		printf("Imc: %f\n", fichaPacientes[i].imc);
	}
	
}