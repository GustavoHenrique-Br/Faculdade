#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 
		
		
	int main(){
	int n = 15;
	int i;
	int vetorA[n];
	srand(time(NULL)); 
		
		
	for (int i = 0; i < n; i++) {
		vetorA[i] = rand() % 101;
	}
	
	int vetorB[n], vetorC[n];
	int tamanhoB = 0, tamanhoC = 0;
	
	for (int i = 0; i < n; i++){
		if (vetorA[i] % 2 == 0){
			vetorB[tamanhoB] = vetorA[i];
			tamanhoB++;
		}	else {
			vetorC[tamanhoC] = vetorA[i];
			tamanhoC++;
		}
	}
		
		printf("Vetor A:\n");
			for (int i = 0; i < n; i++){
				printf("%d ", vetorA[i]);
			}
		printf("\n\n");
		
		printf("Vetor B (pares):\n");
			for (int i = 0; i < tamanhoB; i++){
				printf("%d ", vetorB[i]);
			}
		printf("\n\n");
		
		printf("Vetor C (impares):\n");
			for (int i = 0; i < tamanhoC; i++){
			printf("%d ", vetorC[i]);
			}
			
		}