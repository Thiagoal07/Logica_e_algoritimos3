#include <stdio.h>

int main() {
    char produto[100];
    int quantidade;
    float preco, total;

    fgets(produto, 100, stdin);
    scanf("%d", &quantidade);
    scanf("%f", &preco);

    total = quantidade * preco;

    printf("Produto: %s", produto);
    printf("Valor total: %.2f\n", total);

    return 0;
}