#include <stdio.h>

float areaDaBase (float lado);
float volumePiramide(float areaDaBase, float altura);
void saudacao();

int main(){
	
	saudacao();
	float lado, altura;
	printf("Qual o valor do lado?\n");
		scanf("%f", &lado);
	printf("Qual a altura?\n");
		scanf("%f", &altura);
	
	float area = areaDaBase(lado);
	float volume = volumePiramide(area, altura);
	printf("O valor da Area da Base eh: %.2f\n", area);
	printf("O volume da piramide eh: %.2f\n", volume);
	
	return 0;
}
void saudacao(){
	printf("---> Calculadora do volume da Piramide <---\n");
}
float areaDaBase(float lado){
	return lado * lado;
}
float volumePiramide(float areaDaBase, float altura){
	return (areaDaBase * altura)/3;
}