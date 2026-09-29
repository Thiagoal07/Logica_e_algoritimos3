#include <stdio.h>

int main() {
    char produto[100];
    int quantidade, totalProdutos = 0, vendas = 0;
    float preco, total, faturamento = 0, maiorVenda = 0;
    char continuar;

    do {
        printf("Nome do produto: ");
        getchar();
        fgets(produto, 100, stdin);

        printf("Quantidade: ");
        scanf("%d", &quantidade);

        printf("Preco unitario: ");
        scanf("%f", &preco);

        total = quantidade * preco;

        vendas++;
        totalProdutos += quantidade;
        faturamento += total;

        if (total > maiorVenda) {
            maiorVenda = total;
        }

        printf("Deseja registrar outra venda? (S/N): ");
        scanf(" %c", &continuar);

    } while (continuar == 'S' || continuar == 's');

    printf("Quantidade de vendas: %d\n", vendas);
    printf("Quantidade total de produtos: %d\n", totalProdutos);
    printf("Faturamento total: %.2f\n", faturamento);
    printf("Maior venda: %.2f\n", maiorVenda);

    return 0;
}