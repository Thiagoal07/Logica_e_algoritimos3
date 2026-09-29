#include <stdio.h>

int main() {
    int entrada, saida, horas;
    float valor;

    scanf("%d", &entrada);
    scanf("%d", &saida);

    horas = saida - entrada;

    if (horas <= 1) {
        valor = 10;
    } else {
        valor = 10 + (horas - 1) * 5;
    }

    printf("Tempo de permanencia: %d horas\n", horas);
    printf("Valor total: %.2f\n", valor);

    return 0;
}