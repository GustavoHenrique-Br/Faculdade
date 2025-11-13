#include <stdio.h>

int main() {
    // Declaração de variáveis
    float valorHoraAula, percentualINSS, salarioBruto, salarioLiquido;
    int numAulas;

    // Entrada de dados
    printf("Digite o valor da hora aula: R$ ");
    scanf("%f", &valorHoraAula);

    printf("Digite o numero de aulas dadas no mes: ");
    scanf("%d", &numAulas);

    printf("Digite o percentual de desconto do INSS: ");
    scanf("%f", &percentualINSS);

    // Cálculo
    salarioBruto = valorHoraAula * numAulas;

    // Cálculo
    salarioLiquido = salarioBruto - (salarioBruto * percentualINSS / 100);

    // Exibir resultados
    printf("\nSalario Bruto: R$ %.2f\n", salarioBruto);
    printf("Salario Liquido: R$ %.2f\n", salarioLiquido);

    return 0;
}