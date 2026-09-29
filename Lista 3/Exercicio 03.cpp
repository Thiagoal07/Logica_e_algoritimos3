#include <stdio.h>

int main() {
    float n1, n2;

    scanf("%f %f", &n1, &n2);

    printf("Soma: %.2f\n", n1 + n2);
    printf("Subtracao: %.2f\n", n1 - n2);
    printf("Multiplicacao: %.2f\n", n1 * n2);

    if (n2 != 0) {
        printf("Divisao: %.2f\n", n1 / n2);
    } else {
        printf("Nao e possivel dividir por zero.\n");
    }

    return 0;
}