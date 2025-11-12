#include <stdio.h>

struct Movimento {
    int codigo;
    char nome[50];
    char tipo;
    float valor;
};

int main() {
    struct Movimento m;
    FILE *in = fopen("movimentacoes.txt", "r");
    FILE *out = fopen("relatorio_financeiro.txt", "w");

    if (in == NULL || out == NULL) {
        printf("Erro ao abrir arquivos.\n");
        return 1;
    }


    fprintf(out, "%-6s %-50s %-15s %s\n",
            "Codigo", "Nome", "Operacao", "Valor");


    while (fscanf(in, "%d %s %c %f",
                  &m.codigo, m.nome, &m.tipo, &m.valor) == 4) {
        fprintf(out, "%04d %-50s %-15s %.2f\n",
                m.codigo,
                m.nome,
                (m.tipo == 'P' ? "Pagamento" : "Recebimento"),
                m.valor);
    }

    fclose(in);
    fclose(out);
    return 0;
}
