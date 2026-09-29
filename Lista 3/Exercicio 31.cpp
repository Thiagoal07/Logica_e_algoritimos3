#include <stdio.h>

int main() {
    float litros, preco, bruto, desconto, valorFinal;

    scanf("%f", &litros);
    scanf("%f", &preco);

    bruto = litros * preco;

    if (litros < 20) {
        desconto = 0;
    } else if (litros <= 40) {
        desconto = bruto * 0.03;
    } else {
        desconto = bruto * 0.05;
    }

    valorFinal = bruto - desconto;

    printf("Valor bruto: %.2f\n", bruto);
    printf("Desconto: %.2f\n", desconto);
    printf("Valor final: %.2f\n", valorFinal);

    return 0;
}