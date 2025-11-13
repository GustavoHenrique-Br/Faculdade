#include <stdio.h>  
#include <string.h> 

int main() {
    
    int digito_regiao;
    int verificador1, verificador2;
    
    // Vetor de char para o CPF
    // Tamanho 12: são 11 números + 1 caractere invisível de fim de texto ('\0')
    char cpf[12]; 

    printf("Digite o seu CPF (apenas numeros): \n");
    

    scanf(" %11s", cpf);

    int i = 0;
    // Percorre o vetor cpf até encontrar o '\0'       
    while (cpf[i] != '\0') {
        i++;
    }
    
    // Se o contador 'i' não for exatamente 11, o CPF está incompleto ou errado
    if (i != 11) {
        printf("CPF invalido! Deve conter exatamente 11 digitos.\n");
        return 1; 
    }

    // Conversão de Char para Inteiro (Tabela ASCII) 
    // O computador entende '0' como 48 e '9' como 57.
    // Ao subtrair '0', transformamos o caractere numérico no valor inteiro real.
    
    
    digito_regiao = cpf[8] - '0';  // O 9º dígito (índice 8) define a região fiscal
    verificador1 = cpf[9] - '0';   // O 10º dígito (índice 9) é o primeiro verificador
    verificador2 = cpf[10] - '0';  // O 11º dígito (índice 10) é o segundo verificador

   
    printf("Digito verificador 1: %d\n", verificador1);
    printf("Digito verificador 2: %d\n", verificador2);
    
    printf("Regiao fiscal (%d): \n", digito_regiao);

    
    // Analisa o valor inteiro do nono dígito
    switch (digito_regiao) {
        case 6:
            printf("Minas Gerais (MG)\n");
            break;
        case 7:
            printf("Espirito Santo (ES) ou Rio de Janeiro (RJ)\n");
            break;
        case 8:
            printf("Sao Paulo (SP)\n");
            break;
        case 9:
            printf("Parana (PR) ou Santa Catarina (SC)\n");
            break;
        case 0:
            printf("Rio Grande do Sul (RS)\n");
            break;
        default:
            
            printf("Outro estado ou regiao nao especificada.\n");
            break;
    }

    return 0; 
}