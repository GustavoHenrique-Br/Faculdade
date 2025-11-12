#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
int main()
{
	int chute, tentativasRestantes, acertou;
	tentativasRestantes = 10;
	acertou = 0;
	
	srand(time(NULL)); 
		int nroaleatorio = rand() % 101; 
	int nmrSecreto = nroaleatorio;
	
	printf("---Jogo da Adivinhacao---\n");
	printf("Tente adivinhar o numero entre 1 e 100\n");
	printf("Voce tem 10 tentativas\n");
	
	
	
	while (tentativasRestantes > 0){
		printf("Digite um numero entre 1 e 100:\n");
		scanf("%d", &chute);
		if (chute == nmrSecreto){
			printf("Parabens! Voce acertou o numero\n");
			acertou = 1;
			break;
		} else if (chute < nmrSecreto){
			printf("O numero secreto e maior que %d\n", chute);
		}else {
			printf("O numero secreto e menor que %d\n", chute);
		}
	tentativasRestantes--;
		printf("Tentativas restantes: %d\n", tentativasRestantes);		
	}
	
	if (!acertou){
		printf("Que pena! Voce usou todas as tentativas\n");
		printf("O numero correto era : %d", nmrSecreto);
	}
		
return 0;
}



