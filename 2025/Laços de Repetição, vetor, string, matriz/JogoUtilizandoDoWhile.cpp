#include <stdio.h>

int main() {
    
    int jogada_jogador1, jogada_jogador2;
    int placar_jogador1 = 0, placar_jogador2 = 0;
    int rodada;

    
    printf("--- Jogo Pedra-Papel-Tesoura ---\n");
    printf("Escolha sua jogada digitando o número correspondente:\n");
    printf("1 - Pedra\n");
    printf("2 - Papel\n");
    printf("3 - Tesoura\n");
    printf("O jogo terá 10 rodadas.\n");

 
    for (rodada = 1; rodada <= 10; rodada++) {
        printf("\n--- Rodada %d ---\n", rodada);

  
        do {
            printf("Jogador 1, faça sua jogada: ");
            scanf("%d", &jogada_jogador1);
 
            if (jogada_jogador1 < 1 || jogada_jogador1 > 3) {
                printf("Jogada inválida! Por favor, digite 1, 2 ou 3.\n");
            }
        } while (jogada_jogador1 < 1 || jogada_jogador1 > 3); 

        do {
            printf("Jogador 2, faça sua jogada: ");
            scanf("%d", &jogada_jogador2);
           
            if (jogada_jogador2 < 1 || jogada_jogador2 > 3) {
                printf("Jogada inválida! Por favor, digite 1, 2 ou 3.\n");
            }
        } while (jogada_jogador2 < 1 || jogada_jogador2 > 3); 

        

      
        if (jogada_jogador1 == jogada_jogador2) {
            printf("Empate!\n");
        }
     
        else if ((jogada_jogador1 == 1 && jogada_jogador2 == 3) || 
                 (jogada_jogador1 == 2 && jogada_jogador2 == 1) || 
                 (jogada_jogador1 == 3 && jogada_jogador2 == 2))   
        {
            printf("JOGADOR 1 venceu esta rodada!\n");
            placar_jogador1++; 
        }
       
        else {
            printf("JOGADOR 2 venceu esta rodada!\n");
            placar_jogador2++; 
        }
    }

 
    printf("\n--- Fim de Jogo ---\n");
    printf("Placar Final:\n");
    printf("Jogador 1: %d vitórias\n", placar_jogador1);
    printf("Jogador 2: %d vitórias\n", placar_jogador2);

    return 0;
}