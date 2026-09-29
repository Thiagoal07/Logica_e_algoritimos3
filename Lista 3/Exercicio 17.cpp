#include <stdio.h>

int main() {
    float compra, percentual, desconto, valorFinal;

    scanf("%f", &compra);

    if (compra <= 100) {
        percentual = 0;
    } else if (compra <= 500) {
        percentual = 5;
    } else {
        percentual = 10;
    }

    desconto = compra * percentual / 100;
    valorFinal = compra - desconto;

    printf("Valor original: %.2f\n", compra);
    printf("Desconto: %.2f%%\n", percentual);
    printf("Valor do desconto: %.2f\n", desconto);
    printf("Valor final: %.2f\n", valorFinal);

    return 0;
}